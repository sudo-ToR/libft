#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		i;
	
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}	
	return (cpy);
}
