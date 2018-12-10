/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/11 02:25:27 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/21 16:29:04 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	char	*new;

	new = ft_strjoin(s1, s2);
	free(s1);
	return (new);
}

int		gl_inbuf(int fd, char **line, char **tmp, char **ror)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = 0;
		*tmp = ft_strjoinfree(*tmp, buf);
		if (ft_strchr(*tmp, '\n') || ret < BUFF_SIZE)
			break ;
	}
	if (ret < 0)
		return (-1);
	if (ret == 0)
		return (3);
	*ror ? free(*ror) : NULL;
	*ror = ft_strchr(*tmp, '\n') ? ft_strdup(ft_strchr(*tmp, '\n') + 1) : NULL;
	if (!*ror)
		*line = ft_strdup(*tmp);
	else
		*line = ft_strndup(*tmp, ft_strlen(*tmp) - ft_strlen(*ror) - 1);
	return (1);
}

int		gl_inror(char **line, char **ror, char **tmp)
{
	*ror ? free(*ror) : NULL;
	*ror = ft_strdup(ft_strchr(*tmp, '\n') + 1);
	*line = ft_strndup(*tmp, ft_strlen(*tmp) - ft_strlen(*ror) - 1);
	if (*tmp == NULL || *ror == NULL || *line == NULL)
		return (-1);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static char	*ror[TAB_SIZE];
	char		*tmp;
	int			ret;

	if (fd < 0 || fd >= TAB_SIZE || !line)
		return (-1);
	tmp = ror[fd] ? ft_strdup(ror[fd]) : ft_strnew(0);
	if (!ft_strchr(tmp, '\n'))
	{
		if ((ret = gl_inbuf(fd, line, &tmp, &ror[fd])) == 3)
		{
			if (ft_strlen(tmp) > 0 && (*line = ft_strdup(tmp)))
			{
				ror[fd] = NULL;
				ret = 1;
			}
			ret = ret == 3 ? 0 : 1;
		}
	}
	else
		ret = gl_inror(line, &ror[fd], &tmp);
	free(tmp);
	return (ret);
}
