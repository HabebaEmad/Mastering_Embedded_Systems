/*
===========================================
Name: HW4_2.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int result=1;

int factorial(unsigned int downcounter)
{
    if(downcounter!=0)
    {
    result*=downcounter;
    downcounter--;
    if(downcounter>0)
    factorial(downcounter);
    }
    return result;
}
int main()
{
    int positive_number;
    printf("Enter a positive integer: ");
    scanf("%d",&positive_number);
    printf("Factorial of %d = %d",positive_number,factorial(positive_number));
}
