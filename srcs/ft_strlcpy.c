/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 00:24:43 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/18 00:25:36 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copy string - take full size of buffer and gurantee null-terminated
 * copy up to size - 1 character from nulltermineated string src to dst
 *
 * @param dst
 * @param src
 * @param size
 * @return size_t return total length of the string try to created that mean
 * length of src
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		t_size;

	t_size = 0;
	while (*src && t_size + 1 < size)
	{
		*dst++ = *src++;
		t_size++;
	}
	while (*src++)
		t_size++;
	if (size > 0)
		*dst = '\0';
	return (t_size);
}
// edge case if size is 0 just return size of src and do nothing to dest
// if size is 1 just add null terminator
// else just cpy and return size of src normally
