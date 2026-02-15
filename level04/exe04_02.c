/*
 * Name: exe04_02.c
 * Date: 2026-02-14
 * Purpose: 扩展上题中的程序，使其可以处理 3 位数
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("The reversal is: %d%d%d\n", num % 10, num / 10 % 10, num / 100);

    return 0;
}