/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:54:15 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/23 20:58:38 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int const fd, char **line)
{
  static  char **leftOver;

  if (!line || fd < 0)
    return (-1);
  if (!leftOver)
    leftOver = (char *)malloc(sizeof(char *) * (MAX_FD + 1);
  
}
