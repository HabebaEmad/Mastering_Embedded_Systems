/*
===========================================
Name:lab1.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    float weights[5];
    float sum=0;
    float average_weight;
    float *pweight = weights;
    for(int i=0; i<5;i++)
    {
        printf("Enter the weight of box %d:",i+1);
        scanf("%f",pweight+i);
    }
  
     for(int i=0; i<5;i++)
    {
       sum+= *(pweight+i);
    }
  
    average_weight = sum/5;
    printf("the sum of weights of the boxes = %f\n",sum);
    printf("the average weight of the boxes = %f\n",average_weight);

}