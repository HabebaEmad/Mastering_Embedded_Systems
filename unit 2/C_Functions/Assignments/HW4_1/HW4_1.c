/*
===========================================
Name: HW4_1.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
void Prime_numbers(int n1,int n2)
{
    printf("Prime numbers between %d and %d are: ",n1,n2);
    for(int i=n1; i<=n2; i++)
    {
        for (int f=2;f<i;f++)
     {
        if(i%f==0)
        break;
        else
        {
            if(f==(i-1))
            printf("%d ",i);
            else
            continue;
        }
      }
    }
}

int main()
{
    int n, m;
    printf("Enter two numbers(intervals): ");
    scanf("%d\%d",&n,&m);
    Prime_numbers(n,m);
}