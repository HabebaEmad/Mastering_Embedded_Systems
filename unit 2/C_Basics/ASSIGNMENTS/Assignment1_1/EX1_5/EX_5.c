/*
===========================================
Name: EX_5.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c",&c);
    int AS;
    AS = (int)c;
    printf("ASCII value of %c = %d " , c,AS);
    
}
