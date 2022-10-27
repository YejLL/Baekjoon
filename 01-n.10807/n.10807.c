#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	len;
	int	arr[100];
	int	obj;
	int	cnt = 0;

	printf("배열의 길이를 선택하시오.\n");
	scanf("%d", &len);
	printf("적절한 배열을 입력하시오.\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("중복 횟수를 알고 싶은 숫자를 쓰시오.\n");
	scanf("%d", &obj);
	for (int j = 0; j < len; j++)
	{
		if (arr[j] == obj)
			cnt++;
	}
	printf("%d", cnt);
	return (0);
}
