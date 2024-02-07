/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pricing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:52:34 by adanylev          #+#    #+#             */
/*   Updated: 2024/02/07 11:13:07 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	up_or_down(t_stack *stack, t_stack *first)
{
	int	up;
	int	down;

	up = 0;
	down = 0;
	while (first->num != stack->num && first != NULL)
	{
		up++;
		first = first->next;
	}
	while (stack != NULL)
	{
		down++;
		stack = stack->next;
	}
	if (up == 0)
		return (0);
	else if (up >= down)
		return (1);
	else
		return (2);
}

int	up_or_down2(int index, t_stack *first)
{
	int	up;
	int	down;

	up = 0;
	down = 0;
	while (first->index != index)
	{
		up++;
		first = first->next;
	}
	if (up < (index / 2))
		return (2);
	else
		return (1);
}

void	down(t_stack *tmp, t_stack **a, t_stack **b)
{
	while (tmp->next != NULL)
		rra(a);
	rra(a);
	pb(a, b);
}

void	up(t_stack *tmp, t_stack **a, t_stack **b)
{
	while ((*a)->next != tmp)
		ra(a);
	ra(a);
	pb(a, b);
}

void	function2(int *flag, int *b_len, t_stack **a)
{
	*flag = 0;
	sa(a);
	*b_len = *b_len - 1;
}
