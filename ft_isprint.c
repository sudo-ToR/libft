#include "libft.h"

int		ft_isprint(int c)
{
	if ((char)c > 32)
		return (1);
	else
		return (0);
}
