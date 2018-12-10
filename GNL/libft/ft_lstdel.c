/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 07:03:57 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 13:47:08 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *ptr;

	ptr = *alst;
	while (ptr)
	{
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = ptr->next;
	}
	*alst = NULL;
}
