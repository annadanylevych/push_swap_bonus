/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:10:11 by annadanylev       #+#    #+#             */
/*   Updated: 2024/02/07 11:12:48 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	down2(t_stack *tmp, t_stack **a)
{
	while (tmp->next != NULL)
		rrb(a);
	rrb(a);
}

void	up2(t_stack *tmp, t_stack **a)
{
	while ((*a)->next != tmp && (*a)->next != NULL)
		rb(a);
	rb(a);
}

void	down3(int index, t_stack **a, t_stack **b)
{
	(void)a;
	while ((*b)->index != index)
	{
		if ((*b)->index == index - 1)
			pa(a, b);
		else
			rrb(b);
	}
}

void	up3(int index, t_stack **a, t_stack **b)
{
	(void)a;
	while ((*b)->index != index)
	{
		if ((*b)->index == index - 1)
			pa(a, b);
		else
			rb(b);
	}
}

void	function1(t_stack **tmp, t_stack **a, t_stack **b, int *flag)
{
	*flag = 1;
	if (up_or_down(*tmp, *b) == 1)
		down2(*tmp, b);
	else if (up_or_down(*tmp, *b) == 2)
		up2(*tmp, b);
	pa(a, b);
}
