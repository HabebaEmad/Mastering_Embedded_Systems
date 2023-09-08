/*
===========================================
Name: Q2.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

float square_root(int number)
{
    float root=0 , check=0;
    root=number/2;
    while(root!=check)
    {
        check=root;
        root=(number/check+check)/2;
    }

    return root;
}

int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);
    printf("The square root of %d is %.3f",number,square_root(number));
}