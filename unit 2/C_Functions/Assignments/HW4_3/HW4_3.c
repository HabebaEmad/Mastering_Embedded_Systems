/*
===========================================
Name: HW4_2.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
#include"string.h"

void Reverse_String(char text[],int length)
{
  if (length<0)
  return;
  printf("%c",text[length]);
  length--;
  Reverse_String(text,length);
}

int main ()
{
    char text[500];
    printf("Enter a sentence: ");
    gets(text);
    Reverse_String(text,strlen(text));
}