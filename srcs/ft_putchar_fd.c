/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 01:45:22 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 01:46:35 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// Function name ft_putchar_fd
// Prototype void ft_putchar_fd(char c, int fd);
// Parameters c: The character to output.
// fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the character ’c’ to the specified file descriptor.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
