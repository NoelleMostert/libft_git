#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	while (str[i] == ' ' || !ft_isprint(str[i]))
		i++;

	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 +  (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main ()
{
   int val;
   char str[20];
   
   strcpy(str, "	-bc98993ab489");
   val = ft_atoi(str);
   printf("My atoi string value = %s, My atoi int value = %d\n", str, val);

   strcpy(str, "	-bc98993ab489");
   val = atoi(str);
   printf("Lib string value = %s, Lib int value = %d\n", str, val);

   return(0);
}
