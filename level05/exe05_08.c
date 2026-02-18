/*
 * Name: exe05_08.c
 * Date: 2026-02-17
 * Purpose: 编写一个程序，要求用户输入一个时间（用 24 小时制的时分表示）。
 *          程序选择起飞时间与用户输入最接近的航班，显示出相应的起飞时间
 *          和抵达时间
 * Author: Andy Hsu
 */
#include <stdio.h>
#define DEPARTURE1      8 * 60
#define DEPARTURE2      9 * 60 + 43
#define DEPARTURE3      11 * 60 + 19
#define DEPARTURE4      12 * 60 + 47
#define DEPARTURE5      14 * 60
#define DEPARTURE6      15 * 60 + 45
#define DEPARTURE7      19 * 60
#define DEPARTURE8      21 * 60 + 45  

int main(void)
{
    int hour, minute;
    int departure;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);
    departure = hour * 60 + minute;
    if(departure < (DEPARTURE1 + DEPARTURE2)/2)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if(departure < (DEPARTURE2 + DEPARTURE3)/2)
        printf("Closest departure time is 9:45 a.m., arriving at 11:52 a.m.\n");
    else if(departure < (DEPARTURE3 + DEPARTURE4)/2)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if(departure < (DEPARTURE4 + DEPARTURE5)/2)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if(departure < (DEPARTURE5 + DEPARTURE6)/2)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if(departure < (DEPARTURE6 + DEPARTURE7)/2)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if(departure < (DEPARTURE7 + DEPARTURE8)/2)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}