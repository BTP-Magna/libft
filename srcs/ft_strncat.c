/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:39:03 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 23:39:03 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Not test but whatever will check back when created tester
/**
 * @brief append src string to dest string up to n byte
 * if src contain n or more byte will write up to n plus null terminater
 *
 *
 * @param dest
 * @param src
 * @param n
 * @return char*
 */
char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	while (n-- > 0)
		*ptr = '\0';
	return (dest);
}
