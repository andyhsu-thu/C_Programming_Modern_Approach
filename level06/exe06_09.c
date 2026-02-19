/*
 * Name: exe06_09.c
 * Date: 2026-02-19
 * Purpose: 第 2 章的编程题 8 要求编程计算第一、第二、第三个月还贷后剩余的贷款金额。修改该程
 * 序，要求用户输入还贷的次数并显示每次还贷后剩余的贷款金额
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    double loan, rate, payment;
    double remain;
    int times;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interset rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);
    printf("Enter times: ");
    scanf("%d", &times);

    remain = loan;
    for(int i = 1; i <= times; i++)
    {
        remain = remain * (1 + rate / 100 / 12) - payment;
        printf("Balance remaining after %2d payment: $%.2f\n", i, remain);
    }

    return 0;
}