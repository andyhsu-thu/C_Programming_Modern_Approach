/*
 * Name: exe02_07.c
 * Date: 2026-02-08
 * Purpose: 编写一个程序，要求用户输入一个美元数额，然后显示出如何用
 * 最少张数的 20 美元、10 美元、5 美元和 1 美元钞票来付款
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int amount;
    int twenty_note;
    int ten_note;
    int five_note;
    int one_note;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    twenty_note = amount / 20;
    ten_note = (amount - amount / 20 * 20) / 10;
    five_note = (amount - twenty_note * 20 - ten_note * 10) / 5;
    one_note = amount % 5;

    printf("$20 bills: %d\n", twenty_note);
    printf("$10 bills: %d\n", ten_note);
    printf("$5 bills: %d\n", five_note);
    printf("$1 bills: %d\n", one_note);

    return 0;
}