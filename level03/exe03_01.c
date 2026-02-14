/*
 * Name: exe03_01.c
 * Date: 2026-02-13
 * Purpose:  编写一个程序，以月/日/年（即 mm/dd/yy）的格式接受用户输入的
 * 日期信息，并以年月日（即yyyymmdd）的格式将其显示出来
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);
    printf("You entered the date %4d%02d%02d\n", year, month, day);

    return 0;
}