/**
 * @file inverted_pyramid.c
 * @brief 输入 n，打印 n 行倒等腰三角形（奇数个星号）
 * @example 输入 5，输出：
 *  *********
 *   *******
 *    *****
 *     ***
 *      *
 * @note 考察：双层循环、图形输出规律、笔试高频手撕题
 */

#include <stdio.h>

int main(void)
{
    int n;
    scanf_s("%d", &n);          // 用 scanf 更通用，scanf_s 是 MSVC 特有
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}