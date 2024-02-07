/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:20:18 by adanylev          #+#    #+#             */
/*   Updated: 2024/01/06 13:23:43 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_stack **a, t_stack **b)
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
	sort_three(a);
	pa(a, b);
}
