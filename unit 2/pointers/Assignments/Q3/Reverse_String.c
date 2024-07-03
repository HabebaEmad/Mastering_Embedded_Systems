/*
===========================================
Name:Reverse_String.c
Author: Habeba Emad 
============================================
*/

#include"stdio.h"
#include"string.h"

int main()
{
    char Str[50];
    char *PStr =NULL;
    int L;
    printf("Input a string :");
    gets(Str);
    printf("Reverse of the string is : ");
    L = strlen(Str);
    PStr = &Str[L-1];
    for(int i =0;i<L; i++)
    {
        printf("%c",*PStr);
        PStr--;        
    }

}