/*
 * Name: exe05_07.c
 * Date: 2026-02-16
 * Purpose: 编写一个程序，亶用户输入的 4 个整数中找出最大值和最小值
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num1, num2, num3, num4;
    int largest1, smallest1, largest2, smallest2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if(num1 > num2)
    {
        largest1 = num1;
        smallest1 = num2;
    }else
    {
        largest1 = num2;
        smallest1 = num1;
    }

    if(num3 > num4)
    {
        largest2 = num3;
        smallest2 = num4;
    }else
    {
        largest2 = num4;
        smallest2 = num3;
    }
    
    printf("Largest: %d\n", largest1 > largest2? largest1: largest2);
    printf("Smallest: %d\n", smallest1 < smallest2? smallest1: smallest2);

    return 0;
}