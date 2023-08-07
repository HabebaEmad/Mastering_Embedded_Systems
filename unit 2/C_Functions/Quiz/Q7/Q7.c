/*
===========================================
Name: Q7.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int Power3(int no)
{
    if((no%3)==0)
    return 0;
    else
    return 1;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("%d==>%d",number,Power3(number));
}