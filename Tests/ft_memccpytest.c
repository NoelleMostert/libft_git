#include <memory.h>
#include <stdio.h>
#include "libft.h"

char string1[60] = "Taj Mahal is a historic monument in India.";

int main(void)
{

   char buffer[61];
   char *pdest;
   printf( "Function: _memccpy 42 characters or to character 'c'\n" );
   printf( "Source: %s\n", string1 );
   pdest = ft_memccpy( buffer, string1, 'a', 42);
   *pdest = '\0';
   printf( "Result: %s\n", buffer );
   printf( "Length: %d characters\n", strlen( buffer ) );
}
