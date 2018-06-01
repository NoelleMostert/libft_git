#include "libft.h"
#include <stdio.h>

int main ()
{
	const char haystack[20] = "TutorialsPoint.com";
	const char needle[10] = "Point";
	const char *ret;
	
	ret = ft_strstr(haystack, needle);
	printf("The substring is: %s\n", ret);
	
	return(0);
}
