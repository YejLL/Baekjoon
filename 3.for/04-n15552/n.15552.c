#include <stdio.h>

int	main(void)
{
	int test_case;
	int	sum = 0;
	int	a;
	int	b;
	int	i;

	printf("put a value of test case: ");
	scanf("%d", &test_case);
	for (i = 0; i < test_case; i++)
	{
		printf("two numbers for addition: ");
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("%d\n", sum);
	}
	return (0);
}
