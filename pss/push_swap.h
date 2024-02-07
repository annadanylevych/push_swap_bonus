/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:51:34 by adanylev          #+#    #+#             */
/*   Updated: 2024/02/07 11:11:57 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "lib/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				maincheck(int argc, char **argv, t_stack **stack);
void				err(t_stack **stack);
int					is_valid(int argc, char **argv);
int					checkdups(char *s1, char *s2);
t_stack				*ft_newstack(int nbr);
void				ft_add_back(t_stack **ptr, t_stack *new);
t_stack				*stack_a(int argc, char **argv);
int					numvalid(char *s1);
void				sa(t_stack **a);
void				ss(t_stack **a, t_stack **b);
void				sb(t_stack **b);
t_stack				*ft_last_stack(t_stack *stack);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				rrr_2(t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
int					check_if_sorted(t_stack *a);
int					ft_stacksize(t_stack *stack);
void				sort_three(t_stack **a);
void				break_free(t_stack *stack);
void				put_index(t_stack *stack);
void				sort_five(t_stack **a, t_stack **b);
int					up_or_down(t_stack *stack, t_stack *first);
void				down(t_stack *tmp, t_stack **a, t_stack **b);
void				up(t_stack *tmp, t_stack **a, t_stack **b);
void				sort_five_2(t_stack **a, t_stack **b);
void				sort_rainbow(t_stack **a, t_stack **b, int numchunk);
void				sort_four(t_stack **a, t_stack **b);
void				free_stacks(t_stack **stack);
void				chunk2(t_stack **a, t_stack **b);
void				chunk3(t_stack **b, int chunksize, int basesize);
void				extra(int *chunksize, int *basesize, int *numchunk);
void				down2(t_stack *tmp, t_stack **a);
void				up2(t_stack *tmp, t_stack **a);
void				function1(t_stack **tmp, t_stack **a, t_stack **b,
						int *flag);
void				function2(int *flag, int *b_len, t_stack **a);
int					up_or_down2(int index, t_stack *first);
void				print_stack(t_stack *stack, char c);
void				up3(int index, t_stack **a, t_stack **b);
void				down3(int index, t_stack **a, t_stack **b);

#endif
