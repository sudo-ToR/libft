/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 22:18:30 by user42            #+#    #+#             */
/*   Updated: 2020/04/30 22:25:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp;

	size = 0;
	if (!lst)
		return (size);
	tmp = lst->next;
	while (tmp)
	{
		tmp = lst->next;
		size++;
	}
	return (size);
}
