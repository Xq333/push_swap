/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaria-d <pfaria-d@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:03:21 by pfaria-d          #+#    #+#             */
/*   Updated: 2023/01/18 13:01:45 by pfaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rra(t_pswap *p)
{
	int		tmp;

	tmp = 0;
	if (p->a && p->a->length > 1)
	{
		tmp = p->a->end->v;
		del_values_backa(p);
		insert_values_fronta(p, tmp);
		p->moves++;
	}
}

void	rrb(t_pswap *p)
{
	int		tmp;

	tmp = 0;
	if (p->b && p->b->length > 1)
	{
		tmp = p->b->end->v;
		del_values_backb(p);
		insert_values_frontb(p, tmp);
		p->moves++;
	}
}

void	rrr(t_pswap *p)
{
	rra(p);
	rrb(p);
}
