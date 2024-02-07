/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:48:53 by adanylev          #+#    #+#             */
/*   Updated: 2024/02/07 11:12:10 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack, char c)
{
	t_stack	*tmp;

	if (stack == NULL)
		return ;
	tmp = stack;
	printf("stack %c\n", c);
	while (tmp != NULL)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	printf("\n\n");
}

void	sub_main(t_stack **a, t_stack **b)
{
	if (!check_if_sorted(*a))
	{
		if (ft_stacksize(*a) == 2)
			sa(a);
		else if (ft_stacksize(*a) == 3)
			sort_three(a);
		else if (ft_stacksize(*a) == 4)
			sort_four(a, b);
		else if (ft_stacksize(*a) == 5)
		{
			sort_five(a, b);
			sort_five_2(a, b);
		}
		else if (ft_stacksize(*a) > 5 && ft_stacksize(*a) <= 100)
			sort_rainbow(a, b, 4);
		else if (ft_stacksize(*a) > 100)
			sort_rainbow(a, b, 8);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	b = NULL;
	a = stack_a(argc, argv);
	i = 0;
	if (!a)
		err(&a);
	sub_main(&a, &b);
	break_free(a);
	return (0);
}
