/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:33:51 by asydykna          #+#    #+#             */
/*   Updated: 2021/09/28 11:36:20 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void
	perrorexit(void)
{
	ft_putendl_fd("Error", 2);
	exit (0);
}

void
	print_lst(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp && tmp->content)
	{
		printf("%d\n", *(int *)tmp->content);
		tmp = tmp->next;
	}
}
