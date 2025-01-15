/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:39:28 by hakader           #+#    #+#             */
/*   Updated: 2025/01/15 11:24:47 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_reapate(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->content == value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_isdigit(char *c)
{
	if (!c)
		return (0);
	if (*c == '-' || *c == '+')
		c++;
	while (*c)
	{
		if (!(*c >= '0' && *c <= '9'))
			return(0);
		c++;
	}
	return (1);
}

int stack_is_empty(t_stack *stack)
{
	if (!stack)
		return (1);
	return (0);
}

int check_spaces(char *av)
{
	int i;

	i = 0;
	if (!av)
		return (0);
	while (av[i])
	{
		if (av[i] > 8 && av[i] < 14)
			return (-1);
		if (av[i] == 32)
			return (1);
		i ++;
	}
	return (0);
}
