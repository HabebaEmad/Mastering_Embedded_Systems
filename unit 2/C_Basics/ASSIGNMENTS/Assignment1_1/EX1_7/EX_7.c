/*
===========================================
Name: EX_7.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    a=b-a;
    b=b-a;
    a=b+a;
    printf("After swapping, value of a = %.2f",a);
    printf("\r\nAfter swapping, value of b = %.1f",b);

}
