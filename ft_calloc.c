#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	**array;

	array = malloc(sizeof(void *) * nmemb);
	if (size == 0 || array == NULL)
		return (NULL);
	while (nmemb != 0)
	{
		nemb--;
		array[nemb] = malloc(sizeof(char) * size);
		if (array[size] == NULL)
			return (NULL);
	}
	return(array[0]);
}

