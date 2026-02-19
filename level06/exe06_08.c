/*
 * Name: exe06_08.c
 * Date: 2026-02-19
 * Purpose: 编写程序显示单月的日历。用户指定这个月的天数和该月起始日是星期几
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int days;
    int start_day;
    int i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    for(i = 1; i < start_day; i++)
        printf("    ");
    for(i = 1; i <= days; i++)
    {
        printf("%4d", i);
        if(start_day % 7 == 0)
            printf("\n");
        start_day++;
    }
    if(start_day % 7 != 1)
        printf("\n");

    return 0;
}