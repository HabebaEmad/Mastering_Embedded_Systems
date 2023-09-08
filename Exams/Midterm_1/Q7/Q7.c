/*
===========================================
Name: Q7.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int sum=0;
int sum_numbers(int n1, int n2)
{
    sum+=n1;
    n1++;
    if(n1<=n2)
    sum_numbers(n1,n2);
    else
    return sum;
}

int main()
{
    printf("Sum of numbers between 1 and 100 is: %d", sum_numbers(1,100));
}
