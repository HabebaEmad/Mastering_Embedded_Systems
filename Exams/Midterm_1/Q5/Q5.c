/*
===========================================
Name: Q5.c
Author: Habeba Emad 
============================================
*/

#include<Stdio.h>

int count_ones(int number);

int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);
    printf("number %d has %d one's", number,count_ones(number));
}

int count_ones(int number)
{
    int counter =0;
    for(int i=0; i<32 ; i++)
    {
        counter+= (number&(1<<i))>>i;
    }
    return counter;
}