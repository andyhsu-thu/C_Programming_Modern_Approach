/*
 * Name: exe06_12.c
 * Date: 2026-02-19
 * Purpose: 修改编程题 11，使得程序持续执行加法运算，直到当前项小于threshold为止，其中threshold是用户输入的
 * 较小的（浮点）数
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    double e = 1.0, factorial = 1.0;
    double threshold;

    printf("Enter a number to stop calc e: ");
    scanf("%lf", &threshold);
    for(int i = 1; ; i++)
    {
        factorial *= i;
        e += 1.0 / factorial;
        if(1.0 / factorial < threshold)
            break;
    }
    printf("The e = %lf\n", e);

    return 0;
}