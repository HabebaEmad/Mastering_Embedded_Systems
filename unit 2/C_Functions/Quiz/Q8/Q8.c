/*
===========================================
Name: Q8.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
int LO(int arr[],int n)
{
    int search_number;
    printf("Enter number you want to get it's last occurrence : ");
    scanf("%d",&search_number);
    for(int i =n ; i>0 ; i--)
    {
        if(arr[i]==search_number)
        return i;
    }
    return -1;
}

int main()
{
    int n;
    int array[]={1,2,3,4,5,6,4};
    n=sizeof(array)/4;
    int last = LO(array,n);
    printf("the last occurence is %d",last);

}