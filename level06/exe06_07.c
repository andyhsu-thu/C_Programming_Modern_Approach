/*
 * Name: exe06_07.c
 * Date: 2026-02-19
 * Purpose: 重新安排程序 square3.c，在for 循环中对变量 i 进行初始化、判定以及自增操作。不需
 * 要重写程序，特别是不要使用任何乘法。
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int i, n, odd, square;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    odd = 3;
    for (i = 1, square = 1; i <= n; odd += 2, ++i)
    {
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    return 0;
}