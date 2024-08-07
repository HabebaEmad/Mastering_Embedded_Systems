/*
===========================================
Name:A1_Demo_of_how_to_handle_pointers.c
Author: Habeba Emad 
============================================
*/
#include<stdio.h>

int main()
{
    int m =29;
    int *ab = &m;
    printf("Address of m : %p\n",&m);
    printf("Value of m : %d\n",m);
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab :%p\n",ab);
    printf("Content of pointer ab :%d\n",*ab);
    m= 34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab :%p\n",ab);
    printf("Content of pointer ab :%d\n",*ab);
    *ab=7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m :%p\n",&m);
    printf("Value of m :%d\n",m);
}