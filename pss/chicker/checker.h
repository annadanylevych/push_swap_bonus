/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:32:07 by adanylev          #+#    #+#             */
/*   Updated: 2023/12/13 11:40:39 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../gnl/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				rrr_2(t_stack **b);
int					check_if_sorted(t_stack *a);
int					checking(t_stack **a, t_stack **b, char *line);
int					checking1(t_stack **a, t_stack **b, char *line);
int					checking3(t_stack **a, t_stack **b, char *line);
int					checking4(t_stack **a, t_stack **b, char *line);
t_stack				*ft_newstack(int nbr);
void				ft_add_back(t_stack **ptr, t_stack *new);
t_stack				*stack_a(int argc, char **argv);
void				free_stacks(t_stack **stack);
void				break_free(t_stack *stack);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
t_stack				*ft_last_stack(t_stack *stack);
int					ft_stacksize(t_stack *stack);
void				err(t_stack **stack);
int					is_valid(int argc, char **argv);
int					numvalid(char *s1);
int					checkdups(char *s1, char *s2);
void				maincheck(int argc, char **argv, t_stack **a);
void				process(t_stack **a, t_stack **b);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);

#endif
