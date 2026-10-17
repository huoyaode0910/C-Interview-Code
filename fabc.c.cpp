#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int afabonacci(int n)
{
    int a = 1;
    int b = 1;
    int result = 0;

    if (n <= 2)
        return 1;

    for (int i = 3; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", afabonacci(n));
    return 0;
}
