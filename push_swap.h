/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:47:37 by hakader           #+#    #+#             */
/*   Updated: 2025/01/11 16:52:11 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
// # include <stdio.h>

typedef	struct	t_stack_node
{
	int					content;
	struct t_stack_node	*next;
}	t_stack_node;

typedef	struct	s_stack
{
	t_stack_node	*top;
}	s_stack;


#endif