/*
===========================================
Name: Q8.c
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
    int n;
    int Array[50];
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter numbers of array:\n");
    for(int i=0; i<n;i++)
    scanf("%d",&Array[i]);
    Reverse_Array(Array,n);

}