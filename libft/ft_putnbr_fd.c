/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 18:34:00 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/25 18:40:15 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	long count;

	count = n;
	if (count < 0)
	{
		ft_putchar_fd('-', fd);
		count *= -1;
	}
	if (count >= 10)
	{
		ft_putnbr_fd(count / 10, fd);
		ft_putchar_fd((count % 10) + '0', fd);
	}
	else
		ft_putchar_fd(count + '0', fd);
}
