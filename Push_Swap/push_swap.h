/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:26:26 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/16 12:56:15 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# define ERROR {ft_putstr_fd("Error\n", 2); return (0);}

typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

t_stack				*stack_popu(int ac, char **av);
t_stack				*stack_new(int val);
t_stack				*normalize(t_stack **stack);

void				push(t_stack **head, int val);
void				print_stack(t_stack **stack);
void				str_stack_popu(t_stack **stack, char **argv);
void				free_stack(t_stack *stack);
void				do_op(char *line, t_stack **a, t_stack **b);
void				do_sort_3(t_stack **a, t_stack **b);
void				do_sort_5(t_stack **a, t_stack **b);
void				do_sort_20(t_stack **a, t_stack **b);
void				do_sort_500(t_stack **a, t_stack **b);
void				push_max_a(t_stack **b, t_stack **a, int repeat);
void				print_do_op(char *op, t_stack **a, t_stack **b);
void				push_min_or_max_b(t_stack **a, t_stack **b,
					int repeat, int a_length);

int					pop(t_stack **head);
int					read_input(t_stack **a, t_stack **b, char **line);
int					sorted(t_stack *a);
int					check_line(char *line);
int					check_op(char *line);
int					valid_input(int ac, char **av);
int					list_length(t_stack **head);
int					only_digits(char *str);
int					dupe_check(char **av);
int					avg_of_nodes(t_stack *head);
int					valid_input_int(char **av);
int					valid_input_string(char **av);
int					find_min_or_max(t_stack *stack, int type);
int					find_position(t_stack *stack, int value);

void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **b, t_stack **a);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				ra(t_stack **a);
void				rrb(t_stack **b);
void				rb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				rr(t_stack **a, t_stack **b);

#endif
