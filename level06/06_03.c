/*
 * Name: 06_03.c
 * Date: 2026-02-18
 * Purpose:  Calculates the number of digits in an integer
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int digits = 0;
    int n;

    printf("Enter a nonegative integer: ");
    scanf("%d", &n);
    do{
        n /= 10;
        digits++;
    }while(n > 0);
    printf("The number has %d digit(s).\n", digits);

    return 0;
}