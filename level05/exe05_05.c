/*
 * Name: exe05_05.c
 * Date: 2026-02-16
 * Purpose: 编写一个程序，要求用户输入库纳税所得额，然后显示税金
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    float income, tax;

    printf("Enter income: $");
    scanf("%f", &income);
    if(income < 750.00f)
        tax = 0.01 * income;
    else if(income < 2250.00f)
        tax = 7.50f + (income - 750.00f) * 0.02;
    else if(income < 3750.0f)
        tax = 37.50f + (income - 2250.00f) * 0.03;
    else if(income < 5250.00f)
        tax = 82.50f + (income - 3750.00f) * 0.04;
    else if(income < 7000.00f)
        tax = 142.50f + (income - 5250.00f) * 0.05;
    else
        tax = 230.00f + (income - 7000.00f) * 0.06;
    printf("Tax = $%.2f\n", tax);

    return 0;
}