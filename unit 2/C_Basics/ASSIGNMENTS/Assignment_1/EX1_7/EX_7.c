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
    fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%f",&b);
    printf("After swapping, value of a = %.2f",b);
    printf("\r\nAfter swapping, value of b = %.1f",a);

}
