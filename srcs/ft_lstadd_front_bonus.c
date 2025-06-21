/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:45:11 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 14:53:28 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Add new node to the head of the list and push the first node back by
 * one position
 *
 * @param lst
 * @param new
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}
/**
 * Understand
 * Add the node to the head of the list and push the current node back
 *
 * Step
 *
 * What if Edge case
 * list header currently set to null or new node is null
 */
