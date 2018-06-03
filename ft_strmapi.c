#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				str[i] = f(i, str[i]);
				i++;
			}
			return (str);
		}
	}
	return (0);
}
