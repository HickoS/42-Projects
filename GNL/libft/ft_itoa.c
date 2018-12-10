/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 03:52:54 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 03:53:05 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long value)
{
	int count;

	value = value < 0 ? -value : value;
	count = 0;
	while (value)
	{
		value /= 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	int		size;
	long	nbr;
	char	*str;

	nbr = n;
	size = nbr <= 0 ? ft_size(nbr) + 2 : ft_size(nbr) + 1;
	if ((str = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	size--;
	str[size] = 0;
	str[0] = nbr < 0 ? '-' : '0';
	nbr = nbr < 0 ? -nbr : nbr;
	size--;
	while (nbr)
	{
		str[size] = nbr % 10 + 48;
		nbr /= 10;
		size--;
	}
	return (str);
}
