/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hikoudri <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/15 21:57:42 by hikoudri     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/21 16:28:31 by hikoudri    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"

# define BUFF_SIZE 256
# define TAB_SIZE 5000

int		gl_inbuf(int fd, char **line, char **tmp, char **ror);
int		gl_inror(char **line, char **ror, char **tmp);
int		get_next_line(int fd, char **line);
char	*ft_strjoinfree(char *s1, char *s2);

#endif
