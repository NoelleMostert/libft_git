#include <stdio.h>
#include "libft.h"

int main()
{
	char *src = "THIS";
	char dest[12];
	char comp[12];

	strncpy(comp, src, 10);
	ft_strncpy(dest, src, 10);
	
	if (strcmp(dest, comp) == 0)
		printf("Its ok I guess\n");
	else
		printf("Nope\n");
	if (memcmp(dest, comp, strlen(src)) == 0)
		printf("Its ok I guess\n");
	else
		printf("Nope\n");


	printf("Final copy is: %s\n", comp);

	return (0);
}
