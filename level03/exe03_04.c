/*
 * Name: exe03_04.c
 * Date: 2026-02-14
 * Purpose: 编写一个程序，提示用户以(xxx) xxx-xxxx 的格式输入电话号码，
 *          并以 xxx.xxx.xxxx 的格式显示该号码
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int first, second, third;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf(" (%d )%d -%d", &first, &second, &third);
    printf("You entered %03d.%03d.%04d\n", first, second, third);

    return 0;
}