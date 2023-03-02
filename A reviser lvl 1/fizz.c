#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *c)
{
	int	i;
	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long int	nbr;
	nbr = (long int)nb;
	
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	if (nbr <= 9)
	{
		ft_putchar (nbr % 10 + '0');
	}
}

int main()
{
	int	j;
	j = 1;
	while (j <= 100)
	{
		if((j % 3 == 0) && (j % 5 == 0))
		ft_putstring("fizzbuzz");
		else if (j % 3 == 0)
		ft_putstring("fizz");
		else if (j % 5 == 0)
		ft_putstring("buzz");
		else
		ft_putnbr(j);
		write(1, "\n", 1);
		j++;
	}
}

