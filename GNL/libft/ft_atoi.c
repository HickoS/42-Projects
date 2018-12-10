/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 03:57:55 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 03:58:12 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int res;
	int neg;

	neg = 1;
	res = 0;
	i = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	neg = str[i] == '-' ? -1 : 1;
	i = (str[i] == '-' || str[i] == '+') ? i + 1 : i;
	while (ft_isdigit(str[i]))
		res = res * 10 + (str[i++] - 48);
	return (res * neg);
}
