/*
===========================================
Name: HW4_2.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int factorial(unsigned int downcounter)
{
    static int result =1;
    if(downcounter==0)
    result=1;
    else
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
