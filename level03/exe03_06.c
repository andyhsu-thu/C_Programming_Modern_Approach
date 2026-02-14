/*
 * Name: exe03_06.c
 * Date: 2026-02-14
 * Purpose:  修改03_02.c 程序，使用户可以同时输入两个分数，
 *           中间用加号隔开
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d /%d +%d /%d", &num1, &denom1, &num2, &denom2);
    
    printf("The sum is %d/%d\n", num1 * denom2 + num2 * denom1, denom1 * denom2);

    return 0;
}