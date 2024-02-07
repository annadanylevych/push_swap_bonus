/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:47:22 by adanylev          #+#    #+#             */
/*   Updated: 2023/11/09 10:25:16 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_newstack(int nbr)
{
	t_stack	*head;

	head = malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->num = nbr;
	head->next = NULL;
	return (head);
}

void	ft_add_back(t_stack **ptr, t_stack *new)
{
	t_stack	*a;

	a = *ptr;
	if (new == NULL)
		free_stacks(ptr);
	if (a && new)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = new;
	}
	else
	{
		*ptr = new;
	}
}

t_stack	*stack_a(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		nbr;

	a = NULL;
	if (argc < 2)
		exit(1);
	else
	{
		i = 1;
		maincheck(argc, argv, &a);
		while (i < argc)
		{
			nbr = ft_atoi(argv[i]);
			ft_add_back(&a, ft_newstack(nbr));
			i++;
		}
	}
	return (a);
}

void	free_stacks(t_stack **stack)
{
	t_stack	*a;

	while (*stack)
	{
		a = (*stack)->next;
		free(*stack);
		*stack = a;
	}
	exit(1);
}
