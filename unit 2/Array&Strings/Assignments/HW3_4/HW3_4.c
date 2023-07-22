/*
===========================================
Name: HW3_3.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    int n,k,l,i;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    int array[n];
    for (i=0 ; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to be inserted : ");
    scanf("%d",&k);
    printf("Enter the location : ");
    scanf("%d",&l);
    n=n+1;
    int arrays[n];
    for (i=0 ; i<n; i++)
    {
        arrays[i]=array[i];
        if(i==l-1)
        {
            arrays[i]=k;
            break;
        }
    }
    for (i=l ; i<n;i++)
    {
        arrays[i]=array[i-1];
    }
    for(i=0; i<n ; i++)
    {
        printf("%d\t",arrays[i]);
    }
}
