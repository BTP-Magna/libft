/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:36:44 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/17 18:42:50 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief locate a substring - find the first occourence of the substring
 * needle in haystack the terimating null byte \0 are not compared
 *
 * @param haystack - string to search in
 * @param needle - string to search for
 * @return char* return address to the beginning of located substring, or NULL
 * if substring is not found or head of haystack if needle is empty
 */
char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*h_ptr;
	const char	*n_ptr;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		h_ptr = haystack;
		n_ptr = needle;
		while (*n_ptr && *h_ptr == *n_ptr)
		{
			h_ptr++;
			n_ptr++;
		}
		if (*n_ptr == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
// edge case in case of needle is empty return head of haystack
// edge case of empty haystack return NULL
// either input is NULL? undefined
