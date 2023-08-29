/*
===========================================
Name: Q5.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int clear(int number, int bit_position)
{
   number&=~(1<<bit_position);
   return number;
}

int main()
{
    int number, bit_position;
    printf("Input Number= ");
    scanf("%d",&number);
    printf("Bit position= ");
    scanf("%d", &bit_position);
    printf("result = %d",clear(number, bit_position));
}
