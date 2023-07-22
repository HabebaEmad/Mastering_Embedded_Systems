/*
===========================================
Name: HW3_2.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    int n;
    float average=0;
    float sum=0;
    printf("Enter the numbers of data: ");
    scanf("%d",&n);
    float array[n];
    for (int i=0; i<n; i++)
    {
        printf("%d. Enter number: ",i+1);
        scanf("%f",&array[i]);
        sum+=array[i];
    }
    average = sum/n;
    printf("Average = %.2f",average);
}