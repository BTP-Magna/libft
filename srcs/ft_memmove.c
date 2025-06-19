/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 02:59:54 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 02:59:54 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  function copies n bytes from memory area src to memory area dest.
 * The memory areas may overlap: copying takes place as though the bytes in src
 * are first copied into a temporary array that does  not  overlap
 * src or dest, and the bytes are then copied from the temporary array to dest.
 *
 * @param dest
 * @param src
 * @param n
 * @return void*
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_ptr;
	const unsigned char	*s_ptr;

	d_ptr = (unsigned char *)dest;
	s_ptr = (const unsigned char *)src;
	if (d_ptr < s_ptr)
	{
		while (n-- > 0)
			*d_ptr++ = *s_ptr++;
	}
	else if (d_ptr > s_ptr)
	{
		d_ptr += n;
		s_ptr += n;
		while (n-- > 0)
			*(--d_ptr) = *(--s_ptr);
	}
	return (dest);
}
// There maybe overlap so need to check the input address whether it came from
// front and back and need to reverse copy or copy forward to avoid buffer
// 0 1 2 3 4 5
// a b c d e f
// ^   ^
// s   d

// 0 1 2 3 4 5
// a b c d e f
// ^   ^
// d   s
