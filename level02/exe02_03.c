/*
 * Name: exe02_03.c
 * Date: 2026-02-08
 * Purpose: 修改上题中的程序，使用户可以自行输入球体的半径
 * Author: Andy Hsu
 */
#include <stdio.h>
#define PI 3.14
int main(void)
{
    float radius;
    float volume;

    printf("Enter the radius of sphere: ");
    scanf("%f", &radius);
    volume = 4.0f / 3.0f * PI * radius * radius *radius;
    printf("volume = %f\n", volume);

    return 0;
}