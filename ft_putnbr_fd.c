include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char a;
	long number;

	number = n;
	if (n < 0)
	{i
		number = number * -1;
		ft_putchar_fd('-', fd);
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	a = 48 + (number % 10);
	ft_putchar_fd(a, fd);
}
