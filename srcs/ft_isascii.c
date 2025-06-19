/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:48:33 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/18 00:29:21 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check whether the character are within ASCII characters or not
 * doesn't include extend ASCII version
 *
 * @param c
 * @return int
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
