/*
===========================================
Name: Q8.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
int LO(int arr[],int n)
{
    printf("the number is %d ==> result=%d",arr[n-1],n-1);
}

int main()
{
    int n;
    int array[]={1,2,3,4,5,6,4};
    n=sizeof(array)/4;
    LO(array,n);

}