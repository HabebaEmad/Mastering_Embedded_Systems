/*
===========================================
Name: EX2_2.c
Author: Habeba Emad 
============================================
*/

#include <stdio.h>

int main()
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c",&alphabet);
    if ((alphabet=='a')||(alphabet=='e')||(alphabet=='i')||(alphabet=='o')||(alphabet=='u'))
    printf("%c is a vowel.",alphabet);
    else
    printf("%c is a consonant.",alphabet);
}