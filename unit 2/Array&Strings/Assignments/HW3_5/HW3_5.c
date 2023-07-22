/*
===========================================
Name: HW3_5.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    int n , s ,i;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    int array[n];
    for ( i=0; i<n ; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the elements to be searched : ");
    scanf("%d",&s);
    for(i=0 ; i<n ; i++)
    {
        if(array[i]==s)
        {
            printf("Number found at the location = %d\n",i+1);
        }
    }

}