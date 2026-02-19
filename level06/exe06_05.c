/*
 * Name: exe06_05.c
 * Date: 2026-02-19
 * Purpose: 第 4 章的编程题 1 要求编写程序显示出两位数的逆序。设计一个更具一般性的程序，可以
 * 处理一位、两位、三位或者更多位的数。提示：使用 do 循环将输入的数重复除以 10，直到值达到 0
 * 为止
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The reversal is: ");
    do
    {
        printf("%d", num % 10);
        num /= 10;
    } while (num != 0);
    printf("\n");

    return 0;
}