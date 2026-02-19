/*
 * Name: exe06_02.c
 * Date: 2026-02-19
 * Purpose:  编写程序，要求用户输入两个整数，然后计算并显示这两个整数的最大公约数（GCD）
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    while(n != 0)
    {
        int reminder = n;

        n = m % n;
        m = reminder;
    }
    printf("Greatest common divisor: %d\n", m);

    return 0;
}