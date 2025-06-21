/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:59:15 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 15:08:22 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Recursive may cause stack overflow so gonna comment it out
// int	ft_lstsize(t_list *lst)
// {
// 	if (!lst)
// 		return (0);
// 	return (1 + ft_lstsize(lst->next));
// }

// version 0
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (size);
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
