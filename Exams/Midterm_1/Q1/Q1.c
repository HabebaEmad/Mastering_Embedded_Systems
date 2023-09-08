/*
===========================================
Name: Q1.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
#include "string.h"

int Sum_All_Digits(char string[],int length);

int main()
{
    char numberstr[100];
    printf("Enter an integer number:");
    gets(numberstr);
    printf("Sum of All it's digits is %d",Sum_All_Digits(numberstr,strlen(numberstr)));
}
int Sum_All_Digits(char string[],int length)
{
    int sum =0;
    for(int i=0 ;i<length; i++)
    {
        string[i]= string[i] - '0';
        sum+=string[i];
    }
    return sum;  
}