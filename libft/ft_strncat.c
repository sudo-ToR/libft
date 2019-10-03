#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t length;
	size_t i;

	length = ft_strlen(dest);
	i = 0;
	while (i < n && src[i])
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
