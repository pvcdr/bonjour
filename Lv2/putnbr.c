#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = (long int)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n <= 9)
	{
		ft_putchar(n % 10 + '0');
	}
}
#include <stdio.h>
#include <limits.h>
int main()

{

	ft_putnbr(INT_MIN);
}
