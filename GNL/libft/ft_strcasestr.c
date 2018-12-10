/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcasestr.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:05:04 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 16:05:05 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*hcpy;
	char	*ncpy;

	i = 0;
	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	hcpy = ft_strtolower((char *)haystack);
	ncpy = ft_strtolower((char *)needle);
	while (hcpy[i])
	{
		j = 0;
		while (ncpy[j] == hcpy[i])
		{
			j++;
			i++;
			if (ncpy[j] == 0)
				return ((char *)haystack + (i - j));
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
