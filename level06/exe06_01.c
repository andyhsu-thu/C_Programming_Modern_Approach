/*
 * Name: exe06_01.c
 * Date: 2026-02-19
 * Purpose: 编写程序，找出用户输入的一串数中的最大数。程序需要提示用户一个一个地输入数。
 *          当用户输入0或负数时，程序必须显示出已输入的最大非负数
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    float max = 0.0f;
    float tmp;
    int num = 0;

    printf("Enter a number: ");
    while((scanf("%f", &tmp) == 1) && tmp > 0)
    {
        num++;
        if(tmp > max)
            max = tmp;
        printf("Enter a number: ");
    }
    if(num > 0)
        printf("The largest number entered was %.2f\n", max);
    else
        printf("Nothing entered!\n");

    return 0;
}