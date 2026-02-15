/*
 * Name: exe04_03.c
 * Date: 2026-02-14
 * Purpose: 重新编写编程题 2 中的程序，使新程序不需要利用算术分割就可以显示
 *          出 3 位数的逆序
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);
    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}