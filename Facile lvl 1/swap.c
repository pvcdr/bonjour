#include <stdio.h> 

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 15;
	ft_swap(&a, &b);
	printf("%d = a, %d = b", a , b);
}
