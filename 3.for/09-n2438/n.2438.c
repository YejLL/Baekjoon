#include <stdio.h>

int	main(void)
{
	int	test_case;

	printf("how many times do you want to test?: ");
	scanf("%d", &test_case);
	for (int i = 1; i <= test_case; i++)
	{
		for (int star = 1; star <= i; star++)
			printf("*");
		printf("\n");
	}
	return (0);
}
