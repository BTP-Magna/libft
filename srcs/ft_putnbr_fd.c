/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 01:51:33 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 02:06:36 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	s_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// Function name ft_putnbr_fd
// Prototype void ft_putnbr_fd(int n, int fd);
// Parameters n: The integer to output.
// fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the integer ’n’ to the specified file descriptor.
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	s_putchar_fd((nb % 10) + '0', fd);
}
