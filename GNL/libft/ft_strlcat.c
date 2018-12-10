/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:05:52 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 16:05:52 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t original_size;

	i = ft_strlen(dst);
	if (i >= size)
		return (size + ft_strlen(src));
	original_size = i;
	j = 0;
	while (i < size - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = 0;
	return (ft_strlen(src) + original_size);
}
