/*
===========================================
Name: Q10.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int count_max_ones(int number);

int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);
    printf("maximum number of one's between two zeroes in number %d is %d", number,count_max_ones(number));
}

int count_max_ones(int number)
{
    int counter =0;
    int consequtive_1=0;
    int max =0;
    for(int i=0; i<32 ; i++)
    {
        counter+= (number&(1<<i))>>i;
        if(((number&(1<<i))>>i)==0)
        {
        counter=0;
        if(consequtive_1>max)
        max =consequtive_1;
        consequtive_1=0;
        }
        if(counter!=0)
         consequtive_1 ++;
        
    }
    return max;
}