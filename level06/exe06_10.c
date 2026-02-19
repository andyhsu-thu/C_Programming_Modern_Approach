/*
 * Name: exe06_10.c
 * Date: 2026-02-19
 * Purpose: 第 5 章的编程题 9 要求编写程序判断哪个日期更早。泛化该程序，使用户可以输入任意
 * 个日期。用0/0/0指示输入结束，不再输入日期
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int day, month, year;
    int day_min = 100, month_min = 100, year_min = 100;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);
    while(month != 0 || day != 0 || year != 0)
    {
        if(year < year_min || ((year == year_min) && (month < month_min)) || ((year == year_min) && (month == month_min) && day < day_min))
        {   
            year_min = year;
            month_min = month;
            day_min = day;
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &month, &day, &year);
    }
    printf("%d/%d/%02d is the earliest date.\n", month_min, day_min, year_min);

    return 0;
}