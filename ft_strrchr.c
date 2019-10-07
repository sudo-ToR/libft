#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;
	char	*tmp;

	tmp = (char *)s;
	size = ft_strlen(tmp);
	while (size != 0 && tmp[size] != c)
		size--;
	if (tmp[size] != c)
		return (NULL);
	return (&tmp[size]);
}
