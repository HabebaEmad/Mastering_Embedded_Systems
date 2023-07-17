/*
===========================================
Name: EX2_7.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    int n;
    int product=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            product=product*i;
        }
        printf("Factorial = %d",product);
    }
    else if (n==0)
    {
        product=1;
        printf("Factorial = %d",product);
    }
    else
    printf("Error!!! Factorial of negative number doesn't exist.");
}

