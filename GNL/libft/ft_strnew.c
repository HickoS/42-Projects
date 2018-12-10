/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 15:53:12 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:53:13 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;

	newstr = (char *)malloc(sizeof(char) * size + 1);
	if (newstr == NULL)
		return (NULL);
	ft_memset(newstr, 0, size + 1);
	return (newstr);
}
