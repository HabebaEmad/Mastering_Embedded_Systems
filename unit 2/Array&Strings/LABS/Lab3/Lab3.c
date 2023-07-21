/*
===========================================
Name: Lab3.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    float matrix[3][3];
    for (int row=0; row<3; row++)
    {
        for (int col=0; col<3; col++)
        {
            printf("Enter the item(%d,%d) : ",row,col);
            scanf("%f",&matrix[row][col]);
        }
    }
    printf("the matrix is\n");
    for ( int r=0;r<3;r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%.2f\t",matrix[r][c]);
        }
        printf("\r\n");
    }
    printf("the Transpose matrix is\n");
    for(int ct=0; ct<3; ct++)
    {
        for (int rt=0; rt<3; rt++)
        {
            printf("%.2f\t",matrix[rt][ct]);
        }
        printf("\r\n");
    }
}