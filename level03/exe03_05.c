/*
 * Name: exe03_05.c
 * Date: 2026-02-14
 * Purpose: 编写一个程序，要求用户（按任意次序）输入 1~16 的所有整数，
 *          然后用 4×4 矩阵的形式将它们显示出来，再计算出每行、每列和
 *          每条对角线上的和
 * Author: Andy Hsu
 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int num[SIZE][SIZE];
    int row_sums[SIZE];
    int col_sums[SIZE];
    int diagonal_sums[2] = {0, 0};
    int r_id, c_id;

    printf("Enter the numbers from 1 to 16 in any order: ");
    for(r_id = 0; r_id < SIZE; r_id++)
        for(c_id = 0; c_id < SIZE; c_id++)
            scanf("%d", &num[r_id][c_id]);
    for(r_id = 0; r_id < SIZE; r_id++)
    {
        for(c_id = 0; c_id < SIZE; c_id++)
            printf("%4d ", num[r_id][c_id]);
        printf("\n");
    }

    // 计算行、列及对角线的和
    for(r_id = 0; r_id < SIZE; r_id++)
    {
        row_sums[r_id] = 0;
        for(c_id = 0; c_id < SIZE; c_id++)
            row_sums[r_id] += num[r_id][c_id];
    }
    for(c_id = 0; c_id < SIZE; c_id++)
    {
        col_sums[c_id] = 0;
        for(r_id = 0; r_id < SIZE; r_id++)
            col_sums[c_id] += num[r_id][c_id];
    }
    for(r_id = 0; r_id < SIZE; r_id++)
    {
        for(c_id = 0; c_id < SIZE; c_id++)
        {
            if(c_id == r_id)
                diagonal_sums[0] += num[r_id][c_id];
            if(c_id + r_id == 3)
                diagonal_sums[1] += num[r_id][c_id];
        }
    }       
        
    printf("Row sums:");
    for(r_id = 0; r_id < SIZE; r_id++)
        printf(" %d", row_sums[r_id]);
    printf("\n");
    printf("Col sums:");
    for(c_id = 0; c_id < SIZE; c_id++)
        printf(" %d", col_sums[c_id]);
    printf("\n");
    printf("Diagonal sums:");
    for(int i = 0; i < 2; i++)
        printf("%d ", diagonal_sums[i]);
    printf("\n");
    

    return 0;
}