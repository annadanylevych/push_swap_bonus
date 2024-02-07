/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:16:47 by adanylev          #+#    #+#             */
/*   Updated: 2024/01/07 14:14:39 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	b = NULL;
	a = stack_a(argc, argv);
	if (!a)
		err(&a);
	maincheck(argc, argv, &a);
	process(&a, &b);
}

int	checking(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strncmp(line, "sa\n", 3))
	{
		sa(a);
		return (0);
	}
	else if (!ft_strncmp(line, "sb\n", 3))
	{
		sb(b);
		return (0);
	}
	else if (!ft_strncmp(line, "ss\n", 3))
	{
		ss(a, b);
		return (0);
	}
	checking1(a, b, line);
	return (0);
}

int	checking1(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strncmp(line, "ra\n", 3))
	{
		ra(a);
		return (0);
	}
	else if (!ft_strncmp(line, "rb\n", 3))
	{
		rb(b);
		return (0);
	}
	else if (!ft_strncmp(line, "rr\n", 3))
	{
		rr(a, b);
		return (0);
	}
	checking3(a, b, line);
	return (0);
}

int	checking3(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strncmp(line, "rra\n", 4))
	{
		rra(a);
		return (0);
	}
	else if (!ft_strncmp(line, "rrb\n", 4))
	{
		rrb(b);
		return (0);
	}
	else if (!ft_strncmp(line, "rrr\n", 4))
	{
		rrr(a, b);
		return (0);
	}
	checking4(a, b, line);
	return (0);
}

int	checking4(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strncmp(line, "pa\n", 3))
	{
		pa(a, b);
		return (0);
	}
	else if (!ft_strncmp(line, "pb\n", 3))
	{
		pb(a, b);
		return (0);
	}
	return (1);
}
