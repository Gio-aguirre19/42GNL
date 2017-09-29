/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:54:15 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/27 21:09:11 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	concat(const int fd, char **leftover, char *buffer)
{
	char		*temp;

	temp = ft_strjoin(leftover[fd], buffer);
	free(leftover[fd]);
	leftover[fd] = temp;
}

int		next_line(const int fd, char **line, char **leftover, int *split)
{
	char		*temp;

	*line = ft_strsub(leftover[fd], 0, *split);
	temp = ft_strsub(leftover[fd], (*split + 1),
			ft_strlen(leftover[fd]) - *split);
	free(leftover[fd]);
	leftover[fd] = temp;
	*split = 0;
	return (1);
}

int		last_line(const int fd, char **line, char **leftover, int split)
{
	*line = ft_strsub(leftover[fd], 0, split);
	leftover[fd][0] = 0;
	return (1);
}

int		gnl(const int fd, char **line, char **leftover, int bytes_read)
{
	char		buffer[BUFF_SIZE + 1];
	int			split;

	split = 0;
	while ((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		leftover[fd] ? concat(fd, leftover, buffer) :
			(leftover[fd] = ft_strdup(buffer));
		while (leftover[fd][split] != '\n' && leftover[fd][split] != '\0')
			split++;
		if (leftover[fd][split] == '\n')
			return (next_line(fd, line, leftover, &split));
	}
	if (bytes_read < 0)
		return (-1);
	while (leftover[fd][split] != '\0' && leftover[fd][split] != '\n')
		split++;
	if (leftover[fd][split] == '\n')
		return (next_line(fd, line, leftover, &split));
	if (leftover[fd][split] == '\0' && split > 0)
		return (last_line(fd, line, leftover, split));
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	**leftover;

	if (!leftover)
		leftover = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
	return (gnl(fd, line, leftover, 0));
}
