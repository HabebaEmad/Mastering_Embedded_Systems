/*
===========================================
Name: Factorial.c  "C Functions"
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int factorial(int num)
{
    int result =1;
    if(num!=0)
    {
        for(int i=1; i<=num ;i++)
        {
            result*=i;
        }
    }
    else
    result =1;
    return result;
}

int main()
{
    int num;
    printf("Enter positive integer number: ");
    scanf("%d",&num);
    printf("Factorial(%d)=%d", num , factorial(num));
}