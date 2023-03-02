#include <unistd.h>

int	test(char *str, char c, int pos)
{
	int	i;
	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return (1);

}

void	ft_union(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;
	int k = 0;

	while (s1[i])
	i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	i -= 1;
	while (k <= i)
	{
		if (test(s1, s1[k], k) == 1)
			write(1, &s1[k], 1);
		k++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
