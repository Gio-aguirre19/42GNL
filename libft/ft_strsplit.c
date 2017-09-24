/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:33:26 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/01 20:57:41 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ltrs(const char *s, char c)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		num++;
	}
	return (num);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	k = -1;
	i = 0;
	if (!s || !(array = (char **)malloc(sizeof(*array) *
				(ft_countwords(s, c) + 1))))
		return (NULL);
	while (++k < ft_countwords(s, c))
	{
		j = 0;
		if (!(array[k] = ft_strnew(ltrs(&s[i], c) + 1)))
			array[k] = NULL;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			array[k][j++] = (char)s[i++];
		array[k][j] = '\0';
	}
	array[k] = 0;
	return (array);
}
