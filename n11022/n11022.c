#include <stdio.h>

int	main(void)
{
	int put_num1, put_num2;
	int	test_case;
	int	sum;

	printf("How many times do you want to test? : ");
	scanf("%d", &test_case);
	for (int x = 1; x <= test_case; x++)
	{
		printf("put a value of num1,2! : ");
		scanf("%d %d", &put_num1, &put_num2);
		sum = put_num1 + put_num2;
		printf("Case #%d: %d + %d = %d\n", x, put_num1, put_num2, sum);
	}
	return (0);
}
