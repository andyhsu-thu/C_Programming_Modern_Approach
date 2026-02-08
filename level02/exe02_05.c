/*
 * Name: exe02_05.c
 * Date: 2026-02-08
 * Purpose:  编程要求用户输入 x 的值，然后显示多项式的值
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    float x;
    float res;

    printf("Enter x value: ");
    scanf("%f", &x);
    res = 3.0 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x
          - x * x + 7 * x - 6;
    printf("res = %f\n", res);

    return 0;
}