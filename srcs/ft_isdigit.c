/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:37:22 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/18 00:29:25 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function won't handle unidcode
/**
 * @brief Check whether character is digit
 *
 * @param c
 * @return int
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
