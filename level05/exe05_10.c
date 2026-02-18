/*
 * Name: exe05_10.c
 * Date: 2026-02-17
 * Purpose: 利用 switch 语句编写一个程序，把用数字表示的成绩转换为字母表示的等级
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int score;

    printf("Enter numerical grade: ");
    scanf("%d", &score);
    printf("Letter grade: ");
    switch(score / 10)
    {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("F");
            break;
        default:
            printf("Input error!");
            break;
    }
    printf("\n");

    return 0;
}