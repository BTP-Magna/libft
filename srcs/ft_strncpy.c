/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:59:05 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 22:59:05 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copy string but if there isn't null terminate among n bytes of src
 * the string dest will not be null-terminated as well
 * If len of src is less than n byte write additial null byte to dest
 * @param dest
 * @param src
 * @param n
 * @return char*
 */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ptr;

	ptr = dest;
	while (*src && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	while (n-- > 0)
		*ptr++ = '\0';
	return (dest);
}
