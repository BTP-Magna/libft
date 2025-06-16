/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:17:29 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 22:17:29 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief duplicate a string - mallocs(3) and duplicate original s
 *
 * @param s - original string input
 * @return char* a pointer to new string which is duplicate of the string s
 * or return NULL in case of unsucessful malloc
 * @warning iterate string to get size if '\0' doesn't exist
 * result will be undefined
 */
char	*ft_strdup(const char *s)
{
	char	*new_s;
	char	*ptr;
	size_t 	size;

	size = ft_strlen(s);
	new_s = (char *)malloc(size + 1);
	if (!new_s)
		return (NULL);
	ptr = new_s;
	while (size-- > 0)
		*ptr++ = *s++;
	*ptr = '\0';
	return (new_s);
}
