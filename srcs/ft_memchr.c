/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:02:48 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 19:02:48 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locate byte in byte string
 * Locate the first occurrence of c (convert to an unsigned char) in string
 * @param s
 * @param c
 * @param n
 * @return void* pointer to the byte located, or NULL if no such byte exist
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	unsigned char	character;

	s_ptr = (unsigned char *)s;
	character = (unsigned char)c;
	while (n-- > 0)
	{
		if (*s_ptr++ == character)
			return (--s_ptr);
	}
	return (NULL);
}
