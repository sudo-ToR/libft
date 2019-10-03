#include "libft.h"
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*tmps;
	char	*tmpd;
	size_t	i;

	i = 0;
	tmps = (char *)src;
	tmpd = (char *)dest;
	while (i < n && tmps[i] != (char)c)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return (dest + i + 1);
}
