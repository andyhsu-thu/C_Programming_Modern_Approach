/*
 * Name: exe06_03.c
 * Date: 2026-02-19
 * Purpose:  编写程序，要求用户输入一个分数，然后将其约分为最简分式
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int numerator, denominator;
    int m, n;

    printf("Enter a fraction: ");
    scanf("%d /%d", &numerator, &denominator);
    m = numerator;
    n = denominator;
    while(n != 0)
    {
        int reminder = n;

        n = m % n;
        m = reminder;
    }
    printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);

    return 0;
}