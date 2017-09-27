/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:54:22 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/26 21:10:35 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include "./libft/libft.h"

# define BUFF_SIZE 8
# define MAX_FD 4096

int get_next_line(int const fd, char **line);

#endif
