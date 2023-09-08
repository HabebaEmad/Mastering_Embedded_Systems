/*
===========================================
Name: Q9.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
#include"string.h"

void Reverse_Words(char text[],int length)
{
    int i;
    for(i=0; i<length ; i++)
    {
      if(text[i]==' ')
      {
        printf("%c",text[i+1]);
        break;
      }
    }
    for(int j=i+2;j<length;j++)
    {
        printf("%c", text[j]);
    }
    printf(" ");
    for(int k=0;k<i ;k++)
    printf("%c",text[k]);
}

int main ()
{
    char text[500];
    printf("Enter a sentence: ");
    gets(text);
    Reverse_Words(text,strlen(text));
}