/*
===========================================
Name: lab2.c  "C Functions"
Author: Habeba Emad 
============================================
*/
#include<stdio.h>

int calcMin( int value[] , int n)
{
    int i ;
    int Min=value[0];
    for(i=0 ; i<n ; i++)
    {
        if(Min>value[i])
        {
            Min=value[i];
        }
    }
    return Min;
}

int main()
{
    int arr[3]= { 1,2 ,5};
    int Array[6]= { 99, 77, 54,3,34,85};
    int array[2] = {100,34};
    printf("The minimum values of arr, Array and array are %d,%d and %d",calcMin(arr,3),calcMin(Array,6),calcMin(array,2));
}
   
