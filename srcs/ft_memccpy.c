/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 02:45:26 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 02:45:26 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Need to fix this there is no test case

/**
 * @brief Copy no more than n bytes from memory area src to memory area dest
 * stopping when the character c is found if the memory areas overlap the
 * result are undefined
 *
 * @param dest
 * @param src
 * @param c
 * @param n
 * @return void* pointer to the next character in dest after c, or NULL if c
 * was not found in the first n character of src
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d_ptr;
	const unsigned char	*s_ptr;
	unsigned char		character;

	d_ptr = (unsigned char *)dest;
	s_ptr = (const unsigned char *)src;
	character = (unsigned char)c;
	while (n-- > 0)
	{
		if (*(s_ptr + 1) == character)
			return (d_ptr + 1);
		*d_ptr++ = *s_ptr++;
	}
	return (NULL);
}
