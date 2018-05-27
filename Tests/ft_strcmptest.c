#include "libft.h"
#include <stdio.h>

int main ()
{
   const char haystack[100] = "Point is that this thing is";
   const char needle[100] = "Not like this";
   int ret;

   ret = ft_strcmp(haystack, needle);

   printf("The substring is: %i\n", ret);

   return(0);
}
