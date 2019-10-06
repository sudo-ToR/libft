#include "libft.h"
#include <stdio.h>
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	length = ft_strlen(dest);
	while (dest[i])
		i++;
	while (src[j] && j < (size - length - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
		printf("dest= %s\n", dest);
	}
	i++;
	dest[i] = '\0';
	return (i);
}

#include <bsd/string.h>
int		main()
{
	char dest[40] = "Coucou";
	printf("strlcat =%ld\n", strlcat(dest, " les gens", 16));
}
