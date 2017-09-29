/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 19:30:01 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/28 19:30:05 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	char	*dup;
	size_t	len;
	char	*s_ptr;
	size_t	curr;

	curr = 0;
	s_ptr = (char *)s;
	len = ft_strlen((char *)s);
	dup = (char *)malloc((sizeof(char) * len) + 1);
	if (!dup)
		return (0);
	while (s[curr])
	{
		dup[curr] = s_ptr[curr];
		curr++;
	}
	dup[curr] = '\0';
	return (dup);
}
