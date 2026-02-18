/*
 * Name: exe05_06.c
 * Date: 2026-02-16
 * Purpose: 修改 4.1 节的 upc.c 程序，使其可仅检测 UPC 的有效性。在用户输入
 *          UPC 后，程序将显示 VALID 或 NOT VALID
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int first_sum, second_sum, total;
    int check;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter check digit: ");
    scanf("%d", &check);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    if( check == (9 - (total - 1) % 10))
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}