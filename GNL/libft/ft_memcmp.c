/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 03:53:16 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 03:53:27 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*ps1;
	unsigned const char	*ps2;

	ps1 = s1;
	ps2 = s2;
	i = 0;
	while (i < n && ps1[i] == ps2[i])
		i++;
	return (i == n ? 0 : ps1[i] - ps2[i]);
}
