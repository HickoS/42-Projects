/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 07:06:21 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 13:48:19 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *list;

	list = f(lst);
	new_list = list;
	while (lst->next)
	{
		lst = lst->next;
		if ((list->next = f(lst)) == NULL)
			return (NULL);
		list = list->next;
	}
	return (new_list);
}
