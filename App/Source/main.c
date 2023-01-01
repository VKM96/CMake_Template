/**
 * @file main.c
 * @author VKM96
 * @brief Entry point to simple example application 
 * @version 0.1
 * @date 2023-01-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include "../Include/app.h"

/**
 * @brief Application entry point 
 * 
 * @return int 
 */
int main()
{
    int sum = sum_func(2,3);
    printf("\n sum is %d",sum);
    return 0;
}
