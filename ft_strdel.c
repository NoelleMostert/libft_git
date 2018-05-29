#include "libft.h"

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return (NULL);
	free(*as);
	*as = 0;
}
