#include <stdio.h>
#include "libft.h"

int	test_strcmp()
{
	char haystack[] = "a";
	char needle[] = "b";
	int ret;
	int expret;

	ret = ft_strcmp(haystack, needle);
	expret = strcmp(haystack, needle);

	printf("The function substring is: %i\n", ret);
	printf("The expected function substring is: %i\n", expret);

	return(0);
}
