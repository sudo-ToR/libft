#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] != (char)c)
		return (NULL);
	return (&tmp[i]);
}
