/*
===========================================
Name: HW5_5.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

#define pi 3.141592654
#define Area(x) pi*x*x   


int main()
{
    float r ;
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("Area = %.2f",Area(r));
}