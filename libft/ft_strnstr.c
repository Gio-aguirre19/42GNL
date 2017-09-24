/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gaguirre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 12:33:49 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/01 21:05:43 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = ft_strlen(lit);
	if (size == 0)
		return ((char *)big);
	size--;
	while (big[i] != '\0' && i < (int)len)
	{
		while (big[i + j] == lit[j] && i + j < (int)len)
		{
			if (j == size)
				return ((char *)(big + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
