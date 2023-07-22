/*
===========================================
Name: HW3_7.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
#include"string.h"

int main()
{
    int len=0;
    char text[100];
    printf("Enter a string: ");
    gets(text);
    while(text[len]!=0)
    {
        len+=1;
    }
    printf("Length of string: %d",len);
}