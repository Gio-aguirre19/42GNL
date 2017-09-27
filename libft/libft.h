/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 20:51:56 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/26 19:17:32 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *string);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const*s1, char const *s2);
#endif
