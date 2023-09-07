/*
===========================================
Name: EX2_1.c
Author: Habeba Emad 
============================================
*/


#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer you want to check: ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is even.",number);
    }
    else
    {
        printf("%d is odd.",number);
    }
}