/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:51:21 by lnoirot           #+#    #+#             */
/*   Updated: 2019/10/15 14:07:32 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = ft_strlen(little);
	i = 0;
	if (len < little_len)
		return (NULL);
	if (little_len == 0)
		return ((char *)big);
	while (i + little_len <= len && big[i])
	{
		if (big[0] == little[0] && ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}

