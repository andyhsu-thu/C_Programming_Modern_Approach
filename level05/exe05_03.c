/*
 * Name: exe05_03.c
 * Date: 2026-02-16
 * Purpose:  修改 5.2 节的 broker.c 程序，做出下面两种改变。
 *           (a) 不再直接输入交易额，而是要求用户输入股票的数量和每股的价格
 *           (b) 增加语句用来计算经纪人竞争对手的佣金（少于 2000 股时佣金为
 *               每股 33 美元+3 美分，2000 股或更多股时佣金为每股 33 美元
 *               +2 美分）。在显示原有经纪人佣金的同时，也显示出竞争对手的佣金。
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int amount;
    float price, commission, value;
    float op_commission;            // 竞争对手的佣金

    printf("Enter amount and price of stock: ");
    scanf("%d %f", &amount, &price);
    value = amount * price;
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

    if(amount < 2000)
        op_commission = 33 + 0.03 * amount;
    else
        op_commission = 33 + 0.02 * amount;
    printf("Commission: $%.2f\n", commission);
    printf("Op_commission: $%.2f\n", op_commission);

    return 0;
}