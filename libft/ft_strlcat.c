/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 20:38:22 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/11 17:08:50 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;

	if (!n)
		return (ft_strlen(src));
	i = 0;
	while (*dest && --n)
	{
		dest++;
		i++;
	}
	i += ft_strlen(src);
	if (!n)
		return (++i);
	n--;
	while (n--)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}
