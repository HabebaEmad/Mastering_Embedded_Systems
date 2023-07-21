/*
===========================================
Name: lab1.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    float degrees[10];
    for(int i=0 ; i<10;i++)
    {
        printf("Enter student %d degree: ",i+1);
        scanf("%f",&degrees[i]);
    }
    for (int j=0; j<10;j++)
    {
        printf("Student %d degree is %f\r\n",j+1,degrees[j]);
    }
}