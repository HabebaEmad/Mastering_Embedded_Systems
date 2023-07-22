/*
===========================================
Name: HW3_3.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int main()
{
    int rows,cols;
    printf("Enter rows and column of matrix: ");
    scanf("%d\%d",&rows,&cols);
    int matrix[rows][cols];
    printf("Enter elements of matrix:\n");
    for (int row=0; row<rows; row++)
    {
        for (int col=0; col<cols; col++)
        {
            printf("Enter elements a%d\%d: ",row+1,col+1);
            scanf("%d",&matrix[row][col]);
        }
    }
    printf("Entered Matrix:\n");
    for ( int r=0;r<rows;r++)
    {
        for(int c=0; c<cols; c++)
        {
            printf("%d\t",matrix[r][c]);
        }
        printf("\r\n");
    }
    printf("Transpose of Matrix:\n");
    for(int ct=0; ct<cols; ct++)
    {
        for (int rt=0; rt<rows; rt++)
        {
            printf("%d\t",matrix[rt][ct]);
        }
        printf("\r\n");
    }
}
