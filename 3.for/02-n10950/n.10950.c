#include <stdio.h>

int	main(void)
{
	int num;
	int A;
	int B;

	printf("test cases\n");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		printf("write a value a and b\n");
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return (0);
}
