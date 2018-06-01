#include <stdio.h>
#include "libft.h"

int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char	*ptr;
	char	*ptr1;
	
	ptr = strnstr(largestring, smallstring, 4);
	ptr1 = ft_strnstr(largestring, smallstring, 4);

	printf("This is the system result: %s\n", ptr);
	printf("This is my result: %s\n", ptr1);

	return (0);
}
