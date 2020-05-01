/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:00:03 by user42            #+#    #+#             */
/*   Updated: 2020/05/01 16:02:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    while (lst->next)
        lst = lst->next;
    return (lst);
}