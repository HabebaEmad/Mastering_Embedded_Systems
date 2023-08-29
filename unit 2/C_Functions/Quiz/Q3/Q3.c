/*
===========================================
Name: Q3.c
Author: Habeba Emad 
============================================
*/
#include<stdio.h>

void Reverse_Array(int Array[],int n)
{
    int arr[n];
    for(int i=0;i<n ; i++)
    {
        arr[i]=Array[(n-1)-i];
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n=0;
    int Array[]={1,2,3,4,5,6};
    n=sizeof(Array)/4;
    Reverse_Array(Array,n);

}