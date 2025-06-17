/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:48:24 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 21:48:24 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief compare the first n bytes each interpreted as unsigned char
 * of the memory area s1 and s2
 *
 * @param s1
 * @param s2
 * @param n
 * @return int if n is 0 return 0 else return difference between string
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n-- > 0 && *str1++ == *str2++)
		continue ;
	return *(--str1) - *(--str2);
}
