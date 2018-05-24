#include <stdio.h>
#include "libft.h"

int main ()
{
   char haystack[20] = "Point";
   char needle[10] = "ab";
   int length;
   char *ret;

   length = 4;

   ret = ft_strnstr(haystack, needle, length);

   printf("The substring is: %s\n", ret);

   return(0);
}
