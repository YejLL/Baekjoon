#include <stdio.h>

int	main(void)
{
	int num;
	int i;
	int sum;

	printf("write a value\n");
	scanf("%d", &num);
	for (i = 1; i < 10; i++)
	{
		sum = num * i;
		printf("%d * %d = %d\n", num, i, sum);
	}
	return (0);
}
