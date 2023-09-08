/*
===========================================
Name: Q4.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
#include"string.h"

void Reverse_String(char text[],int length)
{
  if (length<=0)
  return;
  text[length-1]=text[length-1]-48;
  printf("%d",text[length-1]);
  length--;
  Reverse_String(text,length);
}

int main ()
{
    char text[100];
    printf("Enter an integer number: ");
    gets(text);
    Reverse_String(text,strlen(text));
}