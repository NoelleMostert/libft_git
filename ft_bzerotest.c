#include "libft.h"
#include <stdio.h>

int main()
{
	char *a = strdup("Whazzap");
	char *b = strdup("Whazzap");

	bzero(a, strlen(a));
	ft_bzero(b, strlen(b));
	if(memcmp(a, b, 5) == 0)
		printf("OK");
	else
		printf("NOT OK: %s, %s",a,b);
}
