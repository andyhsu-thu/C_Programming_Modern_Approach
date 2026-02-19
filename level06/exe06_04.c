/*
 * Name: exe06_04.c
 * Date: 2026-02-19
 * Purpose: 在 5.2 节的 broker.c 程序中添加循环，以便用户可以输入多笔交易，并且程序可以
 * 计算每次的佣金。程序在用户输入的交易额为 0 时终止。
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    float commission, value;

    printf("Enter value of trade: ");
    scanf("%f", &value);
    while(value != 0)
    {
        if(value < 2500.00f)
            commission = 30.00 + 0.017f * value;
        else if(value < 6250.00f)
            commission = 56.00f + 0.0066f * value;
        else if(value < 20000.00f)
            commission = 76.00f + 0.0034f * value;
        else if(value < 50000.00f)
            commission = 100.00f + 0.0022f * value;
        else if(value < 500000.00f)
            commission = 155.00f + 0.0011f * value;
        else
            commission = 255.00f + 0.0009f * value;
    
        if(commission < 39.00f)
            commission = 39.00f;
        printf("Commission: $%.2f\n", commission);
        printf("Enter value of trade: ");
        scanf("%f", &value);
    }

    return 0;
}