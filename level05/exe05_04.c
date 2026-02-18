/*
 * Name: exe05_04.c
 * Date: 2026-02-16
 * Purpose: 编写一个程序，要求用户输入风速（海里/小时），然后显示相应的描述
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    float speed;

    printf("Enter the speed (miles/hour): ");
    scanf("%f", &speed);
    if(speed < 1.0f)
        printf("Calm");
    else if(speed < 3.0f)
        printf("Light air");
    else if(speed < 27.0f)
        printf("Breeze");
    else if(speed < 47.0f)
        printf("Gale");
    else if(speed < 63.0f)
        printf("Storm");
    else
        printf("Hurricane");
    printf("\n");

    return 0;
}