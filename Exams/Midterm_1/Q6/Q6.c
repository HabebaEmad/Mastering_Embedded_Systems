/*
===========================================
Name: Q6.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int unique_number(int array[],int length);

int main()
{
    int array[30];
    int length;
    printf("Enter size of array:");
    scanf("%d",&length);
    printf("Enter %d numbers:\n",length );
    for(int i=0; i<length ; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("the unique number in this array is : %d",unique_number(array,length));
}

int unique_number(int array[], int length)
{
    int uni_number;
    int j;
    for(int i=0 ; i<length; i++)
    {
        uni_number=array[i];
        for(j=0; j<length ; j++)
        {
            if(i==j)
            continue;
            if(uni_number==array[j])
            break;
        }
        if(j==length)
        break;
    }
    return uni_number;
}