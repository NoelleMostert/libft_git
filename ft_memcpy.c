#include "libft.h"

void	*memcpy(void *str1, const void *str2, size_t n)
{
	size_t = i;
	char *ptr1;
	char *ptr2;

	ptr1 = str1;
	ptr2 = (char *)str2;

	i = 0;
	while (i <= n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return(str1);
}

