/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 01:40:24 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 01:43:29 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (*s)
		f(index++, s++);
	return ;
}
/**
 * Understand
 * apply function to each character
 *
 * Step
 *
 *
 * What if Edge case
 * If s or f is null return
 */
