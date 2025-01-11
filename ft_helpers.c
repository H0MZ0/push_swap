/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:30:54 by hakader           #+#    #+#             */
/*   Updated: 2025/01/11 17:16:36 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*swap(t_stack_node *top)
{
	t_stack_node *tmp;
	if (!top || top->next == NULL)
		return ;
	tmp = top->next->content;
	tmp->next = top;
	top = top->next->next;
}


