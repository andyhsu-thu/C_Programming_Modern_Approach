/*
 * Name: exe03_02.c
 * Date: 2026-02-14
 * Purpose: 编写一个程序，对用户输入的产品信息进行格式化
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num;
    double price;
    int year, month, day;

    printf("Enter item number: ");
    scanf("%d", &num);
    printf("Enter unit price: ");
    scanf("%lf", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);
    printf("Item            Unit            Purchase\n");
    printf("                Price           Date\n");
    printf("%-16d$  %-13.2f%02d/%02d/%4d\n", num, price, month, day, year);

    return 0;
}