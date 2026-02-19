/*
 * Name: exe06_11.c
 * Date: 2026-02-19
 * Purpose: 编写程序，用下面的公式计算 e 的近似值：
 * e = 1/1! + 1/ 2! + 1/ 3! + ... +1/ n!
 * 这里 n 是用户输入的整数
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    double e = 1.0, factorial = 1.0;
    int n;

    printf("Enter a number to calc e: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
        e += 1.0 / factorial;
    }
    printf("The e = %lf\n", e);

    return 0;
}