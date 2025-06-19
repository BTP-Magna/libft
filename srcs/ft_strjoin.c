/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 03:12:11 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/19 22:19:31 by thamahag         ###   ########.fr       */
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
 * @brief Allocates memory (using malloc(3)) and returns a new string,
 * which is the result of concatenating ’s1’ and ’s2’.
 *
 * @param s1
 * @param s2
 * @return char* Return new string that concat together or NULL on error.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*n_str;
	char	*ptr;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = s_strlen(s1) + s_strlen(s2);
	n_str = malloc(size + 1);
	if (!n_str)
		return (NULL);
	ptr = n_str;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (n_str);
}
/**
 * Understand
 * Malloc and join two string together
 *
 * What if Edge case
 * If either s1 or s2 is NULL? return NULL?
 * If both s1 and s2 is empty just return freeable empty
 *
 */

// Function name ft_strjoin
// Prototype char *ft_strjoin(char const *s1, char const *s2);
// Parameters s1: The prefix string.
// s2: The suffix string.
// Return value The new string.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates memory (using malloc(3)) and returns a
// new string, which is the result of concatenating
// ’s1’ and ’s2’.
