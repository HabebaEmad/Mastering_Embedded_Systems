/*
===========================================
Name: HW3_8.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
#include"string.h"

int main()
{
    char text[100];
    char string[100];
    int len;
    printf("Enter the string : ");
    gets(text);
    len = strlen(text);
    for(int i=0; i<len ; i++)
    {
        string[len-i-1]=text[i];
    }
    printf("Reverse string is : ");
    for(int i=0;i<len ; i++)
    {
          printf("%c",string[i]);
    }
}