/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 01:20:01 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 01:33:40 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	s_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s + len))
		len++;
	return (len);
}

/**
 * @brief Create a string that been apply by function pointer to each character
 *
 * @param s
 * @param f
 * @return char* The string created from the successive applications of ’f’.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*n_str;
	char			*n_ptr;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	n_str = malloc(s_strlen(s) + 1);
	if (!n_str)
		return (NULL);
	n_ptr = n_str;
	index = 0;
	while (*s)
	{
		*n_ptr++ = f(index, *s++);
		index++;
	}
	*n_ptr = '\0';
	return (n_str);
}
/**
 * Understand
 * Malloc new string that got apply function to each character
 *
 * Step
 * Detect
 *
 * What if Edge case
 * If s or f is null return NULL
 * If s empty return a freeable empty 1 byte
 */
