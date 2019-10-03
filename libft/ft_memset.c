#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *tmp;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		tmp[i] = (char)c;
		i++;
	}
	return (s);
}
