/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 18:42:36 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/27 20:04:48 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *cont;

	if (!(cont = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		cont->content = NULL;
		cont->content_size = 0;
	}
	else
	{
		if (!(cont->content = malloc(sizeof(content_size))))
		{
			free(cont);
			return (NULL);
		}
		ft_memcpy(cont->content, content, content_size);
		cont->content_size = content_size;
	}
	cont->next = NULL;
	return (cont);
}
