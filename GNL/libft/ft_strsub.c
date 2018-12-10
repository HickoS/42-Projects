/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:07:15 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 16:07:15 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if ((new = malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (i < len)
		new[i++] = s[start++];
	new[i] = 0;
	return (new);
}
