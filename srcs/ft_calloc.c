/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:10:51 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/19 01:23:45 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief allocate memory for an array of nmemb element of size byte each.
 * The memory then is set to zero if nmemb or size is 0 than return
 * a unique pointer value that can later be passed to free() if multiple nmemb
 * and size result in ineger overflow then return an error
 *
 * @param nmemb
 * @param size
 * @return void* return a pointer to the allocated memory which suitable aligned
 * for any built in type or error return NULL
 * Return a unique 1-byte pointer if either size or count is 0
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*n_ptr;
	unsigned char	*ptr;
	size_t			total;

	if (nmemb == 0 || size == 0)
	{
		n_ptr = (unsigned char *)malloc(1);
		if (!n_ptr)
			return (NULL);
		*n_ptr = '\0';
		return ((void *)n_ptr); // can't be NULL soo malloc 1 byte?
	}
	total = nmemb * size;
	if (nmemb > total / size)
		return (NULL);
	n_ptr = (unsigned char *)malloc(total);
	if (!n_ptr)
		return (NULL);
	ptr = n_ptr;
	while (total-- > 0)
		*ptr++ = '\0';
	return ((void *)n_ptr);
}
// Return unique pointer if either nmemb or size equal 0 to be free
// if nmemb * size caluse integer overflow? size_t or int type?
// If nmemb * size overflows, the result total becomes smaller than expected.
// So total / size becomes less than nmemb, making the condition true
