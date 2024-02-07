/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:47:26 by adanylev          #+#    #+#             */
/*   Updated: 2023/12/13 11:41:48 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	err(t_stack **stack)
{
	write(2, "Error\n", 6);
	free_stacks(stack);
	exit(1);
}

int	is_valid(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		if (argv[i][j] == '\0')
			return (0);
		while (argv[i][j])
		{
			if ((argv[i][j]) && (argv[i][j] >= '0' && argv[i][j] <= '9'))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	numvalid(char *s1)
{
	while (*s1 == '0' && *s1)
		s1++;
	if (*s1 == '\0')
		return (1);
	if (*s1 == '-')
	{
		if (ft_strlen(s1) < 11)
			return (1);
		if (ft_strlen(s1) == 11 && (ft_strncmp("-2147483648", s1, 11) >= 0))
			return (1);
		return (0);
	}
	if (ft_strlen(s1) < 10)
		return (1);
	if (ft_strlen(s1) == 10 && (ft_strncmp("2147483647", s1, 10) >= 0))
		return (1);
	return (0);
}

int	checkdups(char *s1, char *s2)
{
	if (ft_atoi(s1) != ft_atoi(s2))
		return (1);
	return (0);
}

void	maincheck(int argc, char **argv, t_stack **a)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (!checkdups(argv[i], argv[j]))
				err(a);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		if (!is_valid(argc, argv) || !numvalid(argv[i]))
			err(a);
		else
			i++;
	}
}
