#include <stdio.h>

int    main(void)
{
    int a, b;
    int c, d, e, res;
    scanf("%d %d", &a, &b);
    c = a * ((b % 100) % 10);
    d = a * ((b % 100) / 10);
    e = a * (b / 100);
    res = a * b;
    printf("%d\n%d\n%d\n%d", c, d, e, res);
}
