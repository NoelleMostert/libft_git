#include <stdio.h>
#include "libft.h"

int main (){

    const char* s1= "Hello World";
    char* new = ft_strdup (s1);

    fprintf( stdout , "%s\n", new);

    return 0;
}
