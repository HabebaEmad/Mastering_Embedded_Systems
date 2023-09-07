/*
===========================================
Name: EX_6.c
Author: Habeba Emad 
============================================
*/


#include<stdio.h>

int main()
{
    float a,b,temp;
    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, value of a = %.2f",a);
    printf("\r\nAfter swapping, value of b = %.1f",b);

}