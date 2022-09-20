/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:09:25 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 17:15:47 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// #include <stdio.h>
// static void	print_elem(void *elem)
// {
// 	printf("%d\n", *(int *)elem);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	e1;
// 	t_list	e2;
// 	int		data1;
// 	int		data2;

// 	data1 = 42;
// 	data2 = 21;
// 	e1.content = &data1;
// 	e2.content = &data2;
// 	e1.next = &e2;
// 	e2.next = 0;
// 	ft_lstiter(&e1, &print_elem);
// }