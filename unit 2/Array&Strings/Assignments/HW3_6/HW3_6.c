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
int sum=0;
char c ;
char text[100];
printf("Enter a string: ");
gets(text);
printf("Enter a character to find frequency: ");
scanf("%s",&c);
for (int i=0; i<100;i++)
{
    if(text[i]==c)
    {
        sum+=1;
    }
}
printf("Frequency of %c = %d",c,sum);
}