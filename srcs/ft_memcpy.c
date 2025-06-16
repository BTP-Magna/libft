/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 02:38:10 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 02:38:10 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy n byte from memory area src to memory area dest the memory area
 * must not overlap
 *
 * @param dest
 * @param src
 * @param n
 * @return void*
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s_ptr;
	unsigned char		*d_ptr;

	s_ptr = (const unsigned char *)src;
	d_ptr = (unsigned char *)dest;
	while (n-- > 0)
		*d_ptr++ = *s_ptr++;
	return (dest);
}
