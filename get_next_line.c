/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:54:15 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/24 20:50:42 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void concat(const int fd, char **leftOver, char *buffer)
{
  char *temp;

  temp = ft_strjoin(leftOver[fd], buffer)
  free(leftOver[fd]);
  leftOver[fd] = temp;
}



int gnl(const int fd, char **line, char **leftOver, int bytes_read)
{
  char  buffer[BUFF_SIZE + 1];
  int   split;

  split = 0;
  while (bytes_read = read(fd, buffer, BUFF_SIZE) > 0)
  {
    buffer[bytes_read] = '\0';
    leftOver[fd] ? concat(fd, leftOver, buffer) : leftOver[fd] = ft_strdup(buffer);
    while (leftOver[fd][split] != '\n' && leftOver[fd][split] != '\0')
      split++;
    if (leftOver[fd][split] == '\n')

  }
}

int get_next_line(const int fd, char **line)
{
  static  char  **leftOver;

  if (!leftOver)
    leftOver = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
  return(gnl(fd, **line, **leftOver, 0))
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		res;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while ((res = get_next_line(fd, &line)) == 1)
	{
		echolines("res =|", ft_itoa(res),"|","\n");
		echolines("line is=|", line, "|", "\n");
	}
	if (argc == 2)
		close(fd);
	return (0);
}
