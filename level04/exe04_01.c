/*
 * Name: exe04_01.c
 * Date: 2026-02-14
 * Purpose:  编写一个程序，要求用户输入一个两位数，然后按数位的逆序打印出
 *           这个数
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("The reversal is: %d%d\n", num % 10, num / 10);

    return 0;
}