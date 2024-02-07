/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:23:30 by adanylev          #+#    #+#             */
/*   Updated: 2024/02/07 11:12:40 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk(t_stack **a, t_stack **b, int numchunk)
{
	int	stacklen;
	int	i;
	int	chunksize;
	int	basesize;

	i = 0;
	stacklen = ft_stacksize(*a);
	basesize = stacklen / numchunk;
	chunksize = stacklen / numchunk;
	while (i < chunksize && numchunk)
	{
		if ((*a)->index <= chunksize)
		{
			pb(a, b);
			chunk3(b, chunksize, basesize);
			i++;
		}
		else
			ra(a);
		if (i == chunksize)
			extra(&chunksize, &basesize, &numchunk);
	}
	chunk2(a, b);
}

void	extra(int *chunksize, int *basesize, int *numchunk)
{
	*chunksize += *basesize;
	*numchunk = *numchunk - 1;
}

void	chunk2(t_stack **a, t_stack **b)
{
	while (ft_stacksize(*a))
		pb(a, b);
}

void	chunk3(t_stack **b, int chunksize, int basesize)
{
	if ((*b)->index < (chunksize - (basesize / 2)))
		rb(b);
}

void	sort_rainbow(t_stack **a, t_stack **b, int numchunk)
{
	int	b_len;
	int	flag;

	flag = 0;
	put_index(*a);
	chunk(a, b, numchunk);
	b_len = ft_stacksize(*b);
	while (b_len > 0)
	{
		if (up_or_down2(b_len, *b) == 1)
			down3(b_len, a, b);
		else if (up_or_down2(b_len, *b) == 2)
			up3(b_len, a, b);
		pa(a, b);
		b_len--;
		if (*a && (*a)->next && (*a)->next->index == b_len)
		{
			sa(a);
			b_len--;
		}
	}
}
