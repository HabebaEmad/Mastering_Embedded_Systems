/*
===========================================
Name: One_Sided_Pyramid2.c
Author: Habeba Emad 
============================================
*/

#include <stdio.h>
int One_sided_Pyramid()
{
  int n=0;
    for (int j=10 ;j>=1;j-- , n++)
    {

         for(int i=n;i<=9;i++)
         {

            printf("%d ",i);
         }
    printf("\r\n");
    }  
}
int main()
{
    One_sided_Pyramid();
}