/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_operations_02.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:18:00 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/15 22:12:59 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ra(t_stack **stack_a)
{
	t_stack *first;
	t_stack *last;

	first = (*stack_a);
	last = (*stack_a);
	if (!*stack_a)
		return ;
	while (last->next != NULL)
		last = last->next;
	(*stack_a) = first->next;
	first->next = NULL;
	last->next = first;
}

void	rb(t_stack **stack_b)
{
	t_stack *first;
	t_stack *last;

	first = (*stack_b);
	last = (*stack_b);
	if (!*stack_b)
		return ;
	while (last->next != NULL)
		last = last->next;
	(*stack_b) = first->next;
	first->next = NULL;
	last->next = first;
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	ra(stack_a);
	rb(stack_b);
}
