/*
 * Name: exe05_01.c
 * Date: 2026-02-16
 * Purpose: 编写一个程序，确定一个数的位数
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number %d has ", num);
    if(num >= 0 && num <= 9)
        printf("1");
    else if(num >= 10 && num <= 99)
        printf("2");
    else if(num >= 100 && num <= 999)
        printf("3");
    else
        printf("4");
    printf(" digits\n");

    return 0;
}