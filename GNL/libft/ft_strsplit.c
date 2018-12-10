/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:09:25 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 16:09:27 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_word(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char		**ft_fill_tab(char **tab, char const *s, char c)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i] && s[i] != c)
			{
				i++;
				k++;
			}
			tab[j++] = ft_strsub(s, (i - k), k);
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char **tab;

	if (s == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * ft_count_word(s, c) + 1);
	if (tab == NULL)
		return (NULL);
	tab = ft_fill_tab(tab, s, c);
	return (tab);
}
