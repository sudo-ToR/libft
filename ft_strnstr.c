#include "libft.h"

char	*ft_strnstr(const char * big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = ft_strlen(little);
	i = 0;
	if (little_len == 0)
		return ((char *)big);
	while (i <= (len - little_len))
	{
		if (big[0] == little[0] && ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
