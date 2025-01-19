/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:30:54 by hakader           #+#    #+#             */
/*   Updated: 2025/01/17 12:06:09 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_creat_stack(int data)
{
	t_stack *new_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		return(NULL);
	new_stack->content = data;
	new_stack->next = NULL;
	return (new_stack);
}

int	push_stack(t_stack **stack, int data)
{
	t_stack *new_stack;

	new_stack = ft_creat_stack(data);
	if (!new_stack)
		return (0);
	new_stack->next = *stack;
	*stack = new_stack;
	return (1);
}

int ft_peek(t_stack *stack)
{
	int value;

	value = stack->content;
	return (value);
}

int	ft_pop(t_stack **stack)
{
	t_stack *tmp;
	int top_value;

	top_value = (*stack)->content;
	tmp = *stack;
	*stack = (*stack)->next;
	free (tmp);
	return (top_value);
}

void swap_ab(t_stack *stack)
{
	int tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
}

void ft_rotate_ab(t_stack **stack)
{
	t_stack *last;

	last = *stack;
	if (stack_is_empty(*stack))
		return ;
	while (last->next)
		last = last->next;
	last->next = (*stack);
	*stack = (*stack)->next;
	last->next->next = NULL;
}

void ft_rev_rotate_ab(t_stack **stack)
{
	t_stack *before_last;
	t_stack *last;

	if (stack_is_empty(*stack))
		return ;
	before_last = *stack;
	while (before_last->next->next != NULL)
		before_last = before_last->next;
	last = before_last->next;
	last->next = *stack;
	*stack = last;
	before_last->next = NULL;
}

int	fill_stack(t_stack **stack, int ac, char **av)
{
	ac -= 1;
	int value;
	int check;


	while (ac > 0)
	{
		check = check_spaces(av[ac]);
		if (check == -1)
			return (0);
		if (check == 1){
			printf ("%s", "here");
		}
			// ft_split(av[ac], 32);
		if (ft_isdigit(av[ac]) == 0)
			return (0);
		value = ft_atoi(av[ac]);
		if (ft_check_reapate(*stack, value) == 0)
			return (0);
		if (push_stack(stack, value) == 0)
			return (0);
		ac--;
	}
	return (1);
}



void ft_printstack(t_stack *stack)
{
	if (stack == NULL)
		return ;
	printf("%d\n", stack->content);
	ft_printstack(stack->next);
}

int main (int ac, char **av)
{
	t_stack *stack;
	stack = NULL;
 
 	if (fill_stack(&stack, ac, av)== 0)
		printf("%s", "Error");
	ft_printstack(stack);
	// ft_rev_rotate_ab(&stack);
	printf("\n");
	ft_printstack(stack);
}

