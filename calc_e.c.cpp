#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fact(int x)
{
    double f = 1;
    for (int i = 2; i <= x; i++)
        f *= i;
    return f;
}

int main(void)
{
    int n;
    double result = 1.0;   // 先把 1/0! = 1 加进去
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += 1.0 / fact(i);
    }

    printf("%.4f\n", result);
    return 0;
}
