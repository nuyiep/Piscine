#include <stdio.h>

int	*ft_range(int min, int max);

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
	if (test == NULL)
		printf("NULL\n");
}

int	main(void)
{
	int *test = ft_range(2,5);
	int *test1 = ft_range(6,5);
	int *test2 = ft_range(5,5);
	int *test3 = ft_range(-1,3);
	int *test4 = ft_range(3,-1);
	print_test(test, 3);
	print_test(test1, 0);
	print_test(test2, 0);
	print_test(test3, 4);
	print_test(test4, 0);
	return (0);
}

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	c;
	int	*range;

	c = 0;
	if (min >= max)
		return (NULL);
	else
	{
		range = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
			range[c++] = min++;
	}
	return (range);
}