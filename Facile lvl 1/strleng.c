int	ft_strleng(char *c)
{
	int	i;
		
	i = 0;
	while (c[i])
	i++;
	return (i);
}

#include <stdio.h>

int main()

{
	char c[] = "abc";
	printf("%d", ft_strleng(c));
}
