/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:52:01 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/17 16:52:15 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief concatenate string by take the full size of bufer and gurantee to
 * null terminated the result as long as size is larger than 0 or as long as
 * there is is at least one byte free in dst, and both src and dst must be
 * null terminated - return use to calculate whether there is truncate occur
 *
 * @param dst
 * @param src
 * @param size
 * @return size_t total length of string trying to created
 * inital length of dst till null up to size plus length of src but if iterate
 * through src without finding NUL the len of string consider to be size
 *
 * strlen(src) + number of bytes before the null terminator in dst, up to size
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*s_ptr;
	char		*d_ptr;
	size_t		s_size;
	size_t		d_size;

	s_ptr = src;
	s_size = 0;
	while (*s_ptr++)
		s_size++;
	d_ptr = dst;
	d_size = 0;
	while (*d_ptr && size > d_size)
	{
		d_ptr++;
		d_size++;
	}
	if (size <= d_size)
		return (s_size + size);
	s_ptr = src;
	while (*s_ptr && size-- > d_size + 1)
		*d_ptr++ = *s_ptr++;
	*d_ptr = '\0';
	return (s_size + d_size);
}
