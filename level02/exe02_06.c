/*
 * Name: exe02_06.c
 * Date: 2026-02-08
 * Purpose:   修改上题，用如下公式对多项式求值：
 * ((((3x + 2) x 5)x - 1)x + 7)x - 6
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    float x;
    float res;

    printf("Enter x value: ");
    scanf("%f", &x);
    res = ((((3*x+2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("res = %f\n", res);

    return 0;
}