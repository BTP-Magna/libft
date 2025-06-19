/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 02:42:19 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/19 03:03:53 by thamahag         ###   ########.fr       */
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

static char	*s_freeable_empty_byte(void)
{
	char	*s_str;

	s_str = (char *)malloc(1);
	if (!s_str)
		return (NULL);
	*s_str = '\0';
	return (s_str);
}

/**
 * @brief Extract and malloc sub string from string s
 *
 * @param s
 * @param start Where to get substring from
 * @param len How much character to extract
 * @return char*
 * @warning if input is s is null return null
 * or if int start go over s return * freeable 1 byte '\0'
 * if len going over s just malloc and extract what available or freeable empty;
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_str;
	char	*s_ptr;
	size_t	s_size;

	if (!s)
		return (NULL);
	s_size = s_strlen(s);
	if (start >= s_size)
		return (s_freeable_empty_byte());
	if (len > s_size - start)
		len = s_size - start;
	s_str = (char *)malloc(len + 1);
	if (!s_str)
		return (NULL);
	s += start;
	s_ptr = s_str;
	while (len-- && *s)
		*s_ptr++ = *s++;
	*s_ptr = '\0';
	return (s_str);
}
// what if start go over s string size?
// what if len go over s string
// what if s is empty?
// What if input s point to null

// Parameters s : The original string from which to create the substring.
// start : The starting index of the substring within ’s’.
// len : The maximum length of the substring.
// Return value The substring. NULL if the allocation fails.
// External functs. malloc Description Allocates memory (using malloc(3))
// and returns a substring from the string ’s’.
// The substring starts at index ’start’ and has a maximum length of ’len’.
