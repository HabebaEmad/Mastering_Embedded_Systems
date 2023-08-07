/*
===========================================
Name: Q2.c
Author: Habeba Emad 
============================================
*/
#include<stdio.h>

int swap(int arr1[],int arr2[],int len1,int len2)
{
    int arrs[len1];
    for(int i=0;i<len2;i++)
    {
        arrs[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arrs[i];
    }
    printf("A={");
    for(int up=0; up<len2;up++)
    {
        printf("%d",arr1[up]);
        if(up<len2-1)
        printf(", ");
    }
    printf("}\nB={");
    for(int up=0; up<len1;up++)
    {
      printf("%d",arr2[up]);
      if(up<len1-1)
      printf(", ");
    }
    printf("}");


}

int main()
{
    int A[]={1,2,3,4};
    int B[]={5,6,7,8,9,10,22};
    int length_A, length_B;
    length_A= sizeof(A)/4;
    length_B = sizeof(B)/4;
    swap(A,B,length_A,length_B);
}