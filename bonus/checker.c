/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:08:51 by hakader           #+#    #+#             */
/*   Updated: 2025/02/02 20:58:40 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// void	ft_printstack(t_stack *stack)
// {
// 	if (stack == NULL)
// 		return ;
// 	printf("%d\n", stack->content);
// 	ft_printstack(stack->next);
// }

// int	check_sort(t_stack	*stack_a)
// {
// 	while (stack_a->next)
// 	{
// 		if (stack_a->content > stack_a->next->content)
// 			return (1);
// 		stack_a = stack_a->next;
// 	}
// 	return (0);
// }


void	get_checker(t_stack **stack_a, t_stack **stack_b, char *get)
{
	// printf("get : {{{{{{%s}}}}}}\n", get);
	if (strcmp(get, " sa\n") == 0)
		sa(stack_a);
	if (strcmp(get, " sb\n") == 0)
		sb(stack_b);
	if (strcmp(get, " ss\n") == 0)
		ss(stack_a, stack_b);
	if (strcmp(get, " pa\n") == 0)
		pa(stack_a, stack_b);
	if (strcmp(get, " pb\n") == 0)
		pb(stack_a, stack_b);
	if (strcmp(get, " sb\n") == 0)
		sb(stack_b);
	if (strcmp(get, " ra\n") == 0)
		ra(stack_a);
	if (strcmp(get, " rb\n") == 0)
		rb(stack_b);
	if (strcmp(get, " rr\n") == 0)
		rr(stack_a, stack_b);
	if (strcmp(get, " rra\n") == 0)
		rra(stack_a);
	if (strcmp(get, " rrb\n") == 0)
		rrb(stack_b);
	if (strcmp(get, " rrr\n") == 0)
		(rrr(stack_a, stack_b));
	// else
	// 	ft_putstr("Error\n");
}

int main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	char *get;

	stack_a = NULL;
	stack_b = NULL;
	get = NULL;
	ac = ac - 1;
	filter(ac, av, &stack_a, 0);
	while ((get = get_next_line(0)))
	{
		get_checker (&stack_a, &stack_b, get);
		free (get);
	}
	ft_printstack(stack_a);
	if (check_sort(stack_a) == 0)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
