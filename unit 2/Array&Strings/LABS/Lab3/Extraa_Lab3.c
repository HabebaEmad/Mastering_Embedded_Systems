/*
===========================================
Name: Extraa_Lab3.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    int rows,cols;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of coloumns: ");
    scanf("%d",&cols);
    float matrix[rows][cols];
    for (int row=0; row<rows; row++)
    {
        for (int col=0; col<cols; col++)
        {
            printf("Enter the item(%d,%d) : ",row,col);
            scanf("%f",&matrix[row][col]);
        }
    }
    printf("the matrix is\n");
    for ( int r=0;r<rows;r++)
    {
        for(int c=0; c<cols; c++)
        {
            printf("%.2f\t",matrix[r][c]);
        }
        printf("\r\n");
    }
    printf("the Transpose matrix is\n");
    for(int ct=0; ct<cols; ct++)
    {
        for (int rt=0; rt<rows; rt++)
        {
            printf("%.2f\t",matrix[rt][ct]);
        }
        printf("\r\n");
    }
}