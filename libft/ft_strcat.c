#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
