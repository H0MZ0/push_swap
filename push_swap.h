/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:47:37 by hakader           #+#    #+#             */
/*   Updated: 2025/01/15 11:37:28 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef	struct	t_stack
{
	int					content;
	struct t_stack	*next;
}	t_stack;


int ft_check_reapate(t_stack *stack, int value);
int	ft_isdigit(char *c);
int stack_is_empty(t_stack *stack);
void ft_printstack(t_stack *stack);
int	fill_stack(t_stack **stack, int ac, char **av);
int	ft_atoi(const char *str);
void ft_rev_rotate_ab(t_stack **stack);
void ft_rotate_ab(t_stack **stack);
void swap_ab(t_stack *stack);
int	ft_pop(t_stack **stack);
int ft_peek(t_stack *stack);
int	push_stack(t_stack **stack, int data);
void	*ft_creat_stack(int data);
int check_spaces(char *av);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);

//ft_split
// static int	ft_count_word(char const *str, char sep);
// static int	ft_count_alpha(char const *str, char sep);
// static void	ft_free_split(char **split, int i);
// static char	**ft_place_it(char const *str, char sep, char **result, int words);
// char	**ft_split(char const *s, char c);




#endif