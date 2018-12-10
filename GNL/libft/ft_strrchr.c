/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:06:45 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 16:06:45 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i])
		if (s[i++] == c)
			j = i;
	return (j ? (char *)s + j - 1 : NULL);
}
