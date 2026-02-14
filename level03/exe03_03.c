/*
 * Name: exe03_03.c
 * Date: 2026-02-14
 * Purpose: 编写一个程序来分解用户输入的 ISBN 信息
 * Author: Andy Hsu
 */
#include <stdio.h>
int main(void)
{
    int gs1, group_id, publisher_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", &gs1, &group_id, &publisher_code,
            &item_num, &check_digit);
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);

    return 0;
}