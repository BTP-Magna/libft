/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 00:43:12 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 00:43:58 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static size_t	s_int_size(int n)
{
	size_t	size;
	long	nb;

	if (n == 0)
		return (1);
	nb = n;
	size = 0;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb > 0)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

/**
 * @brief Convert int to string
 *
 * @param n
 * @return char*
 * @details get the size of int n parameter malloc and assigne each digit into
 * new string
 */
char	*ft_itoa(int n)
{
	char	*s_numb;
	char	*s_ptr;
	size_t	size;
	long	nb;

	nb = n;
	size = s_int_size(n);
	if (nb < 0)
		nb = -nb;
	s_numb = malloc(size + 1);
	if (!s_numb)
		return (NULL);
	s_ptr = s_numb;
	if (n < 0)
		*s_ptr = '-';
	s_ptr += size;
	*s_ptr-- = '\0';
	if (n < 0)
		size--;
	while (size-- > 0)
	{
		*s_ptr-- = (nb % 10) + '0';
		nb /= 10;
	}
	return (s_numb);
}
