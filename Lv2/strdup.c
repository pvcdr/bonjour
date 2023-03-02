#include <stdlib.h>

int	lengstr(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)

{
	char	*str;
	int		j;

	str = malloc (sizeof(char) * lengstr(src) + 1);
	if (str == NULL)
		return NULL;
	j = 0;
	while (src[j])
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char array1[] = "programing";
	char *p;
	printf("The string in array1 is %s\n", array1);
	p = ft_strdup(array1);
	printf("The duplicated string is %s\n", p);
}*/
