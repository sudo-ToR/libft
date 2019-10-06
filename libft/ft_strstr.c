#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	tmp = (char *)haystack;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			j++;
			i++;
		}
		if ((size_t)j == ft_strlen(needle))
			break;
		i++;
	}
	if (tmp[i] == '\0')	
		return (NULL);
	return (&tmp[i - j]);
}
