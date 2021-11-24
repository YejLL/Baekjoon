#include <stdio.h>

int	main(void)
{
	int	put_num1, put_num2;
	int	test_case;
	int	sum;
	int	x;

	printf("put a test cases: ");
	scanf("%d", &test_case);
	for (int x = 1; x <= test_case; x++)
	{
		printf("put a values of num1,2 for addition!: ");
		scanf("%d %d", &put_num1, &put_num2);
		sum = put_num1 + put_num2;
		printf("Case #%d: %d\n", x, sum);
	}
	return (0);
}
