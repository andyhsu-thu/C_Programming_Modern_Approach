/*
 * Name: exe04_04.c
 * Date: 2026-02-15
 * Purpose:  编写一个程序，读入用户输入的整数并按八进制（基数为 8）显示出来
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    printf("In octal, your number is: %05o\n", num);

    return 0;
}