/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:57:52 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/18 00:29:29 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check whether character is printable character
 *
 * @param c
 * @return int
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
// ' ' 32 and '~' 126 last printable character
