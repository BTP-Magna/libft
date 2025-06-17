/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 22:42:14 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/15 22:42:14 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief memset <string.h> fill memory with a constant byte
 * @details fills the first n bytes of memory area
 * 			pointed by s with the constant byte c
 * @param s pointer to memory aread
 * @param c replacement
 * @param n how many bytes to replace
 * @return void* head of the memory that just got set
 * Calculate input data type and size * n to set byte by byte
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	replace;

	ptr = (unsigned char *)s;
	replace = (unsigned char)c;
	while (n-- > 0)
		*ptr++ = replace;
	return (s);
}
// void	*ft_memset(void *s, int c, size_t n)
// {
// 	unsigned char	*ptr;
// 	size_t			i;
// 	size_t			stop;

// 	ptr = (unsigned char *)s;
// 	i = 0;
// 	stop = sizeof(*s) * n;
// 	while (i < stop)
// 		*(ptr + i++) = c;
// 	return (s);
// }

// https://man.freebsd.org/cgi/man.cgi?query=memset&apropos=0&sektion=0&manpath=FreeBSD+14.3-RELEASE+and+Ports&arch=default&format=html
