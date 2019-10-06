#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	int r;
	int	neg;

	i = 0;
	r = 0;
	neg = 1;
	if (nptr[i] == '-')
			neg *= -1;
	if (nptr[i] == '+')
		i++;
	while ((char)nptr[i] <= '9' && (char)nptr[i] > '0' && nptr[i])
	{
		r = 10 * r + (nptr[i] - 48);
		i++;
	}
	return (neg * r);
}
