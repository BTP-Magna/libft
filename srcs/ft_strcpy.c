/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:54:16 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/16 22:54:16 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief copy string point by src including the terminating null '\0' to
 * buffer pointed to by dest
 *
 * @param dest
 * @param src
 * @return char*
 */
char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
