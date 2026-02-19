/*
 * Name: exe06_06.c
 * Date: 2026-02-19
 * Purpose: 编写程序，提示用户输入一个数 n，然后显示出 1~n 的所有偶数平方值
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int num;
    int i = 2;

    printf("Enter a num: ");
    scanf("%d", &num);
    while(i * i <= num)
    {
        printf("%d\n", i * i);
        i = i + 2;
    }

    return 0;
}