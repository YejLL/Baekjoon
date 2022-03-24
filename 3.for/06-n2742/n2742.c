#include <stdio.h>

int	main(void)
{
	int put_num;

	printf("put a value of put_num! :");
	scanf("%d", &put_num);
	for (int i = put_num; 0 < i; i--)
	{
		printf("%d\n", i);
	}
	return (0);
}
