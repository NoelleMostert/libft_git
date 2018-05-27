#include <stdio.h>
#include "libft.h"

int main()
{
        const char s1[] = "Point";
        const char s2[] = "Point";
        int length;
        int ret;
        int retnorm;
        
        length = 4;
        
        ret = ft_strncmp(haystack, needle, length);
        retnorm = strncmp(haystack, needle, length);
        
        printf("The substring is: %i\n", ret);
        printf("The substring is: %i\n", retnorm);
   
   return(0);
}
