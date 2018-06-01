#include <stdio.h>
#include "libft.h"

int main()
{
    char *p1 = "";
    char *p2;
    p2 = ft_strdup(p1);

    printf("Duplicated string is : %s", p2);
    return 0;
}
