/*
 * Name: exe05_09.c
 * Date: 2026-02-17
 * Purpose: 编写一个程序，提示用户输入两个日期，然后显示哪一个日期更早
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month2, &day2, &year2);
    if(year1 < year2 || (year1 == year2 && month1 < month2) || 
    (year1 == year2 && month1 == month2 && day1 < day2)){
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, 
                month2, day2, year2);
    }else
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, 
                month1, day1, year1);

    return 0;
}