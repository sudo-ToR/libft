#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*tmp1;
	char	*tmp2;

	if (n == 0)
		return (0);
	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	return ((unsigned char *)(tmp1 + n) - (unsigned char *)(tmp2 + n));	
}

#include <stdio.h>
#include <string.h>

int		main()
{
	char *s1 = "bonjour";
	char *s2 = "2";
	size_t n = 4;
	printf("memcmp = %d\n", memcmp((const void *)s1, (const void *)s2, n));
	printf("ft_memcmp = %d\n", ft_memcmp((const void *)s1, (const void *)s2, n));
}
