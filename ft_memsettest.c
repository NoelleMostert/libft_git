#include <stdio.h>
#include "libft.h"

int main ()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'1',5);
   puts(str);
   
   return(0);
}
