/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_movements2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:20:13 by adanylev          #+#    #+#             */
/*   Updated: 2024/01/07 14:16:53 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_stack **a)
{
	t_stack	*tmp;
	int		i;

	if ((*a)->next == NULL || !*a)
		return ;
	tmp = *a;
	i = 0;
	while ((*a)->next != NULL)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	int		i;

	if ((*b)->next == NULL || !*b)
		return ;
	tmp = *b;
	i = 0;
	while ((*b)->next != NULL)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		i;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	i = 0;
	while ((*a)->next != NULL)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	rrr_2(b);
}

void	rrr_2(t_stack **b)
{
	t_stack	*tmp;
	int		i;

	tmp = *b;
	i = 0;
	while ((*b)->next != NULL)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
}
