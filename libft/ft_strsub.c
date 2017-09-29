/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 19:31:15 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/28 19:31:17 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *substring;

	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	if (s)
	{
		substring[len] = '\0';
		if (ft_strlen(s) == 0)
			return (substring);
		while (--len + 1 > 0)
			substring[len] = s[start + len];
	}
	return (substring);
}
