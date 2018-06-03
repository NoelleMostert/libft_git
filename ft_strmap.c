#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int	i;

	i = 0;
	if (s)
	{
		str = ft_strdup(s);
		if (str)
		{
			while (str[i])
			{
				str[i] = f(str[i]);
				i++;
			}
			return (str);
		}
	}
	return (0);
}
