#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmps;
	char	*tmpd;
	size_t	i;

	i = 0;
	tmps = (char *)src;
	tmpd = (char *)dest;
	while (i < n)
	{
		tmpd[i] = tmps[i];
		i++; 
	}		
	return (dest);	
}
