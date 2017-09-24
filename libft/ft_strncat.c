/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:49:51 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/25 16:27:13 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *start;

	start = s1;
	while (*s1)
		s1++;
	while (*s2 && n)
	{
		*s1++ = *s2++;
		n--;
	}
	*s1++ = '\0';
	return (start);
}
