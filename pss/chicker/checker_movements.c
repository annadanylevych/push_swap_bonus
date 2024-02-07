/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_movements.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:07 by adanylev          #+#    #+#             */
/*   Updated: 2024/01/07 14:16:41 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
}

void	ra(t_stack **a)
{
	t_stack	*tmp;

	if ((*a)->next == NULL || !*a)
		return ;
	tmp = *a;
	*a = ft_last_stack(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
}

void	rb(t_stack **b)
{
	t_stack	*tmp;

	if ((*b)->next == NULL || !*b)
		return ;
	tmp = *b;
	*b = ft_last_stack(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!(*a)->next || !*a || !(*b)->next || !*b)
		return ;
	tmp = *a;
	*a = ft_last_stack(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	tmp2 = *b;
	*b = ft_last_stack(*b);
	(*b)->next = tmp2;
	*b = tmp2->next;
	tmp2->next = NULL;
}
