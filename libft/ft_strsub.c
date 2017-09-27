/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:30:29 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/25 19:40:33 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	j = 0;
	i = start;
	sub = (char *)malloc(sizeof(*sub) * len + 1);
	if (!s || !sub)
		return (0);
	while (s[i] && j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
