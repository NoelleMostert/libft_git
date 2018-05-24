#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (i < n && ptr1[i]== ptr2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (*(ptr1 + i) - *(ptr2 + i));
}
