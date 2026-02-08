/*
 * Name: exe02_08.c
 * Date: 2026-02-08
 * Purpose: 编程计算第一、第二、第三个月还贷后剩余的贷款金额
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    double loan, rate, payment;
    double remain;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interset rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);

    remain = loan;
    remain = remain * (1 + rate / 100 / 12) - payment;
    printf("Balance remaining after first payment: $%.2f\n", remain);
    remain = remain * (1 + rate / 100 / 12) - payment;
    printf("Balance remaining after second payment: $%.2f\n", remain);
    remain = remain * (1 + rate / 100 / 12) - payment;
    printf("Balance remaining after third payment: $%.2f\n", remain);

    return 0;
}