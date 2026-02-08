/*
 * Name: exe02_02.c
 * Date: 2026-02-08
 * Purpose: 编写一个计算球体体积的程序，其中球体半径为 10 m，
 * 参考公式v = 4/3πr^3，注意，分数 4/3 应该写为4.0f/3.0f
 * （如果分数写成 4/3 会产生什么结果？）
 * Author: Andy Hsu
 */
#include <stdio.h>
#define PI 3.14
int main(void)
{
    float radius = 10;
    float volume;

    volume = 4.0f / 3.0f * PI * radius * radius *radius;
    printf("volume = %f\n", volume);

    return 0;
}