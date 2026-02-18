/*
 * Name: exe05_02.c
 * Date: 2026-02-16
 * Purpose: 编写一个程序，要求用户输入 24 小时制的时间，然后显示 12 小时制
 *          的格式
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d :%d", &hour, &minute);
    printf("Equivalent 12-hour time: ");
    printf("%02d:%02d %s\n", hour > 12? hour - 12: hour, minute, 
            hour > 12? "PM": "AM");

    return 0;
}