#include <stdio.h>

int    main(void)
{
    int H, M;
	printf("<write Hours and Minutes>\n");
    scanf("%d %d", &H, &M);

	if (45 <= M && M <= 59)
	{
		M = M - 45;
		printf("%d %d", H, M);
	}
	else if (0 <= M && M <= 44)
    {
		M = M + 60 - 45;
		H = H - 1;
		if (H < 0)
			H = H + 24;
        printf("%d %d", H, M);
    }
    return (0);
}
