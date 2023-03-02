#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc (sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main()
{
	int	*tab;
	int	i;
	tab = ft_range(20, 35);
	if (tab == NULL)
	printf("error");
	
	while (tab[i] != '\0')
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
