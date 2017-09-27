/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:54:15 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/26 21:06:25 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	concat(const int fd, char **leftOver, char *buffer)
{
	char		*temp;

	temp = ft_strjoin(leftOver[fd], buffer);
	free(leftOver[fd]);
	leftOver[fd] = temp;
}

int		next_line(const int fd, char **line, char **leftOver, int *split)
{
	char		*temp;

	*line = ft_strsub(leftOver[fd], 0, *split);
	temp = ft_strsub(leftOver[fd], (*split + 1),
			ft_strlen(leftOver[fd]) - *split);
	free(leftOver[fd]);
	leftOver[fd] = temp;
	*split = 0;
	return (1);
}

int		last_line(const int fd, char **line, char **leftOver, int split)
{
	*line = ft_strsub(leftOver[fd], 0, split);
	free(leftOver[fd]);
	return (1);
}

int		gnl(const int fd, char **line, char **leftOver, int bytes_read)
{
	char		buffer[BUFF_SIZE + 1];
	int			split;

	split = 0;
	while ((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (!leftOver[fd])
			concat(fd, leftOver, buffer);
		else
			(leftOver[fd] = ft_strdup(buffer));
		while (leftOver[fd][split] != '\n' && leftOver[fd][split] != '\0')
			split++;
		if (leftOver[fd][split] == '\n')
			next_line(fd, line, leftOver, &split);
		else if (leftOver[fd][split] == '\0' && split > 0)
			last_line(fd, line, leftOver, split);
	}
	if (bytes_read < 0)
		return (-1);
	else
		return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	**leftOver;

	if (!leftOver)
		leftOver = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
	return (gnl(fd, line, leftOver, 0));
}
