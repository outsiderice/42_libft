/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:20:21 by amagnell          #+#    #+#             */
/*   Updated: 2023/09/25 19:44:07 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*new_lst;

	while (lst != NULL)
	{
		content = f(lst->content);
		new_lst = ft_lstnew(content);
		if(!new_lst)
		{
			del(new_lst);
			free(new_lst);
			return(NULL);
		}
		lst = lst->next;
	}
	return (*new_lst);
}
