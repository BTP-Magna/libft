/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 01:47:20 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 01:49:19 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// Function name ft_putstr_fd
// Prototype void ft_putstr_fd(char *s, int fd);
// Parameters s: The string to output.
// fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the string ’s’ to the specified file descriptor
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
}
