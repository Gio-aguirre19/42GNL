/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 19:31:25 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/28 19:38:54 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef __LIBFT_H
#		define __LIBFT_H
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strnew(size_t size);
char				*ft_strdup(char const *s);
size_t				ft_strlen(char const *str);
char				*ft_strsub(char const *s, unsigned int start, size_t len);

#	endif
