/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:31:40 by adanylev          #+#    #+#             */
/*   Updated: 2024/02/07 11:12:29 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->num > a->next->num)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_three(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if (tmp->num > ft_last_stack(tmp)->num && tmp->num > tmp->next->num)
	{
		if (tmp->next->num < ft_last_stack(tmp)->num)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
	else if (tmp->num > tmp->next->num)
		sa(a);
	else if (tmp->num < tmp->next->num && tmp->num > ft_last_stack(tmp)->num)
		rra(a);
	else if (tmp->num < tmp->next->num
		&& tmp->next->num > ft_last_stack(tmp)->num)
	{
		sa(a);
		ra(a);
	}
}

void	put_index(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*evaluated;
	int		ind;

	evaluated = stack;
	tmp = stack;
	ind = 1;
	while (evaluated)
	{
		ind = 1;
		tmp = stack;
		while (tmp)
		{
			if (tmp->num < evaluated->num)
				ind++;
			tmp = tmp->next;
		}
		evaluated->index = ind;
		evaluated = evaluated->next;
	}
}

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	put_index(*a);
	while (tmp->index != 1 && tmp->next != NULL)
		tmp = tmp->next;
	if (up_or_down(tmp, *a) == 0)
		pb(a, b);
	else if (up_or_down(tmp, *a) == 1)
		down(tmp, a, b);
	else if (up_or_down(tmp, *a) == 2)
		up(tmp, a, b);
	tmp = *a;
	while (tmp->index != 2 && tmp->next != NULL)
		tmp = tmp->next;
	if (up_or_down(tmp, *a) == 0)
		pb(a, b);
	else if (up_or_down(tmp, *a) == 1)
		down(tmp, a, b);
	else if (up_or_down(tmp, *a) == 2)
		up(tmp, a, b);
}

void	sort_five_2(t_stack **a, t_stack **b)
{
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
