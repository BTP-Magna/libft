/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:20:52 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/17 19:21:05 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief locate a substring - find the first occourence of the substring
 * needle in haystack up to len size and the terimating null byte \0 are not
 * compared
 *
 * @param big - string to search in
 * @param little - string to search for
 * @param len - size to search for
 * @return char* return address to the beginning of located substring, or NULL
 * if substring is not found or head of haystack if needle is empty
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b_ptr;
	const char	*l_ptr;
	size_t		index;

	if (!(*little))
		return ((char *)big);
	while (*big && len > 0)
	{
		b_ptr = big;
		l_ptr = little;
		index = 0;
		while (*l_ptr && *b_ptr == *l_ptr && len > index)
		{
			b_ptr++;
			l_ptr++;
			index++;
		}
		if (*l_ptr == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
// if big is empty so no way to search return NULL
// if little is empty return head of big immedietly
// if size is 0 return NULL it can't find any
