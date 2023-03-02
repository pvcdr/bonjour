#include <unistd.h> 

void	ft_putstr(char *c)

{
	int	i;
	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;	
	}
}

int main()

{
	char c[] = "Bonjour";
	ft_putstr(c);
}
