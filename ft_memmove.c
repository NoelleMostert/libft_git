#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *src1;
	char *dest1;

	src1 = (char *)src;
	dest1 = (char *)dest;
	i = 0;

	if (src1 < dest1)
		while ((int)n >= 0)
		{
			dest1[n] = src1[n];
			n--;
		}
	else
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	return (dest);
}
