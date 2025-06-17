/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:25:05 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/17 17:25:24 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief function return last occourrence of the character c in string s
 *
 * @param s
 * @param c
 * @return char* address of the last occourance of the c in s
 */
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	character;
	const char		*last_c;

	character = (unsigned char)c;
	last_c = NULL;
	while (*s)
	{
		if (*s == character)
			last_c = s;
		s++;
	}
	if (*s == character)
		last_c = s;
	return ((char *)last_c);
}
