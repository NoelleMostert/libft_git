#include <libft.h>

int	ft_strdup(const char *src)
{
	char *dest;
	int i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
