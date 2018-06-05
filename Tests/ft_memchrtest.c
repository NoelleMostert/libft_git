#include <stdio.h>
#include "libft.h"

int main () {
   const char str[] = "this is the string to test";
   const char ch = ' ';
   char *ret;
   char *retme;

   ret = memchr(str, ch, strlen(str));
   retme = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, retme);

   return(0);
}
