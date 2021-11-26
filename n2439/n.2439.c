#include <stdio.h>

int	main(void)
{
	int test_case;

	printf("insert a value of test_case!: ");
	scanf("%d", &test_case);
	for (int i = 1; i <= test_case; i++)
	{
		for (int space = 1; space <= (test_case - i); space++)
			printf(" ");
		for (int star = 1; star <= i; star++)
			printf("*");
		printf("\n");
	}
	return (0);
}
