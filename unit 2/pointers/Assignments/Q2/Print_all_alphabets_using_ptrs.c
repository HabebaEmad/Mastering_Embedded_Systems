/*
===========================================
Name:Print_all_alphabets_using_ptrs.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    char alphabets[27];
    char *Palphabets = alphabets;
    for(int i =0; i<26;i++)
    {
        *Palphabets =i +'A';
        Palphabets++;
    }
    Palphabets = alphabets;
    printf("The Alphabets are :\n");
     for(int i =0; i<2;i++)
    {
        for(int j = 0; j<13 ;j++)
        {
            printf("%c\t",*Palphabets);
            Palphabets++;
        }
        printf("\n"); 
    }
    
    return (0);
}