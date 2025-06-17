/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:29:24 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/17 20:29:45 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Might need to come back and check to handle over/underflow later?
// This function doesn't handle overflow nor underflow
/**
 * @brief convert a string to an integer
 *
 * @param nptr
 * @return int convert value or 0 on error
 */
int	ft_atoi(const char *nptr)
{
	int		result;
	int 	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
// edge case of INT_MAX 2147483647 and INT_MIN -2147483648
// Does edge case of overflow or underflow need to be handle?
// or define INT_MAX and INT_MIN?
// if current result will cause overflow if multiply by 10 and add digit
// if (result > (2147483648 - current_digit) / 10)
// 	if (sign == 1)
// 		return (INT_MAX);
// 	else if (sign == -1)
// 		return (INT_MIN);
