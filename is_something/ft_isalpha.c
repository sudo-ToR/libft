/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:41:05 by lnoirot           #+#    #+#             */
/*   Updated: 2020/02/15 11:36:55 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
