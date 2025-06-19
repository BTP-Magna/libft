/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/06/16 02:17:15 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 02:17:15 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/**
 * @brief Set all memory area to size of n to null terminator
 *
 * @param s
 * @param n
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*ptr++ = '\0';
}
