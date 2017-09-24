/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gaguirre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:05:18 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/02 21:06:22 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while ((*str == '\n' || *str == '\v' || *str == '\r')
			|| (*str == '\f' || *str == '\t' || *str == ' '))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		i *= 10;
		i += *str - '0';
		str++;
	}
	i *= sign;
	return (i);
}