/*
===========================================
Name:Reverse_array_elements.c
Author: Habeba Emad 
============================================
*/

#include"stdio.h"

int main()
{
    int arr[15];
    int *Parr =NULL;
    int length;
    printf("Input the number of elements to store in the array (max 15) :");
    scanf("%d",&length);
    printf("input %d number of elements in the array :\n",length);
    Parr= arr;
    for(int i=0; i<length;i++)
    {
        printf("element - %d :",i+1);
        scanf("%d",Parr);
        Parr++;
    }
    printf("The elements of array in reverse order are :\n");
    Parr= &arr[length-1];
    for(int i=length; i>0;i--)
    {
        printf("element - %d :%d\n",i,*Parr);
        Parr--;
    }
}