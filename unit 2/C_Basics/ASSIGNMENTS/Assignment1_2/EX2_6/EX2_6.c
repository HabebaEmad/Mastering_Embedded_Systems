/*
===========================================
Name: EX2_6.c
Author: Habeba Emad 
============================================
*/


#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        printf("Sum = %d",sum);
    }
    else
    printf("Wrong number please enter a positive number");
}

