#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *points;
	size_t integer;

	points = str;
	integer = 0;
	while (integer < n)
		points[integer++] = (unsigned char)c;
	return (str);
}

int main ()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'1',5);
   puts(str);
   
   return(0);
}
