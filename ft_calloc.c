/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:24:36 by lnoirot           #+#    #+#             */
/*   Updated: 2019/10/09 10:25:38 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	**array;

	array = malloc(sizeof(void *) * nmemb);
	if (size == 0 || array == NULL)
		return (NULL);
	while (nmemb != 0)
	{
		nmemb--;
		array[nmemb] = malloc(sizeof(char) * size);
		if (array[size] == NULL)
			return (NULL);
	}
	return (array[0]);
}
