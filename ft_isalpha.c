#include "libft.h"

int		ft_isalpha(int c)
{
	if(((unsigned char)c <= 'z' && (unsigned char)c >= 'a')
		|| ((unsigned char)c <= 'Z' && (unsigned char)c >= 'A'))
		return (1);
	else
		return (0);
}
