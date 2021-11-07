#include <stdio.h>

int	main(void)
{
	int input_num;
	int sum;

	printf("input a value\n");
	scanf("%d", &input_num);
	sum = 0;
	for (int i = 1; i <= input_num; i++)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
