/*
===========================================
Name: Q1.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
#include<string.h>
void check(int string[])
{
    if(strcmp(string,"Habeba Emad")==0)
    {
        printf("The string is the same as USERNAME\n");
    }
    else
    printf("The string is not the same as USERNAME\n");
}

int main()
{
    char string_input[50];
    printf("Enter Username: ");
    gets(string_input);
    check(string_input);


}