#include <stdio.h>

int	main(void)
{
	int put, test_case, num;

	printf("insert a number of test_case and max_num: ");
	scanf("%d %d", &test_case, &num);
	for (int i = 0; i < test_case; i++)
	{
		scanf("%d", &put);
		if (num > put)
			printf("%d ", put);
	}
	return (0);
}
