/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:21:58 by adanylev          #+#    #+#             */
/*   Updated: 2023/11/08 11:42:13 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "ra\n", 3);
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
	write(1, "rb\n", 3);
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
	write(1, "rr\n", 3);
}
