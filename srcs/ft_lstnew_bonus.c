/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:22:15 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/21 14:35:20 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Initialize new node and assign content address into the member
 * and NULL to next
 *
 * @param content Address to the variable the node will assign the content to
 * will assume that it caller responsibilty to initialize or free the content
 * @return t_list* node
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/**
 * Understand
 * Malloc new node and store the content inside node element not sure if I need
 * to malloc new void into member? consider I don't the know size of the input
 * I would assume it just give me address to already allocate variable
 *
 * Step
 *
 *
 * What if Edge case
 * If content pointer point to NULL it seem I was wrong it actually might be
 * legit push to add NULL to content as new Node
 */
