/*
===========================================
Name: EX2_8.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    float x,y,result;
    char operator;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&operator);
    printf("Enter two operands: ");
    scanf("%f\%f",&x,&y);
    switch (operator)
    {
        case '+':
        {
            result = x+y;
            printf("%.1f + %.1f = %.1f",x,y,result);
        }
        break;
        case '-':
        {
            result = x-y;
            printf("%.1f - %.1f = %.1f",x,y,result);
        }
        break;
        case '*':
        {
            result = x*y;
            printf("%.1f * %.1f = %.1f",x,y,result);
        }
        break;
        case 'divide':
        {
            result = x/y;
            printf("%.1f divide %.1f = %.1f",x,y,result);
        }
        break;

    }

}