#include "libft.h"
#include <string.h>
#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;
	char	*tmps;
	char	*tmpd;

	tmps = (char *)src;
	tmpd = (char *)dest;
	tmp = (char *)malloc(sizeof(char) * n);
	i = 0;
	while (i < n)
	{
		tmp[i] = tmps[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		tmpd[i] = tmp[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char *src = strdup("Salut");
	char *dest = src + 3;
	char *src1 = strdup("Salut");
	char *dest1 = src1 + 3;
	
	printf("memmove =%s\n", (char *)memmove((void *) dest, (const void *)src, 4));
	printf("ft_memmove =%s\n", (char *)ft_memmove((void *) dest1, (const void *)src1, 4));
}
