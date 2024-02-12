/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:30:56 by adanylev          #+#    #+#             */
/*   Updated: 2024/02/07 11:09:04 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_last_stack(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

int	ft_stacksize(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack)
	{
		while (stack)
		{
			stack = stack->next;
			i++;
		}
	}
	return (i);
}

void	break_free(t_stack *stack)
{
	t_stack	*tmp;
	while (stack != NULL)
	{
		tmp = stack;
		free(stack);
		stack = tmp->next;
	}
}
