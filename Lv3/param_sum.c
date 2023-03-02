#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int nbr;
	nbr =(long int)nb;
	
	if (nbr > 9)
	{
		ft_putnbr (nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	if (nbr <= 9)
	{
		ft_putchar(nbr % 10 + '0');
	}
}

int main(int argc, char **argv)
{
	argv = 0;
	ft_putnbr(argc - 1);
	return (0);
}
