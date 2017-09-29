/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 19:30:53 by gaguirre          #+#    #+#             */
/*   Updated: 2017/09/28 19:30:57 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	len1;
	unsigned long	len2;
	char			*concatenated_str;

	if (!s1 && !s2)
		return (ft_strnew(0));
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	concatenated_str = (char *)malloc((sizeof(char) * (len1 + len2 + 1)));
	if (concatenated_str)
	{
		concatenated_str[(len1 + len2)] = '\0';
		while (--len2 + 1 > 0)
			concatenated_str[(len1 + len2)] = s2[len2];
		while (--len1 + 1 > 0)
			concatenated_str[len1] = s1[len1];
		return (concatenated_str);
	}
	return (0);
}
