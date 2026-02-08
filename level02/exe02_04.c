/*
 * Name: exe02_04.c
 * Date: 2026-02-08
 * Purpose:  编写一个程序，要求用户输入一个美元数额，然后显示出增加 5%税率
 *           后的相库金额。格式如下所示：
 *           Enter an amount: 100.00
 *           With tax added: $105.00
 * Author: Andy Hsu
 */
#include <stdio.h>
#define RATE 0.05
int main(void)
{
    float amount, tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    tax = amount * RATE;
    printf("With tax added: $%.2f\n", (amount + tax));

    return 0;
}