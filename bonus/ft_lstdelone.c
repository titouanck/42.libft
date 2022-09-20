/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchevrie <tchevrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:48:21 by tchevrie          #+#    #+#             */
/*   Updated: 2022/09/19 16:58:54 by tchevrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// static void	test_del(void *elem)
// {
// 	size_t	size;
// 	size_t	i;

// 	size = sizeof(*elem);
// 	i = 0;
// 	while (i < size)
// 	{
// 		*(unsigned char *)(elem + i) = 0;
// 		i++;
// 	}
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*elem;
// 	int		data;

// 	data = 42;
// 	elem = malloc(sizeof(t_list));
// 	if (!elem)
// 		return (1);
// 	elem->content = &data;
// 	elem->next = 0;
// 	printf("(before) %d\n", *(int *)elem->content);
// 	ft_lstdelone(elem, &test_del);
// 	printf("(after) %d\n", *(int *)elem->content);
// 	printf("Let's try to free elem !\n");
// 	free(elem);
// }