#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int res = 0;

	printf("write a year!\n");
	scanf("%d", &res);
	printf("%d\n", res - 543);
	
	return (0);
}
