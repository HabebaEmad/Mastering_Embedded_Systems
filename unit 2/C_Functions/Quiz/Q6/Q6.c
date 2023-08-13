/*
===========================================
Name: Q6.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int dec_to_bin_L4(int n)
{
    int bin[32];
    int bin_len;
    int i=0;
    int fin_binary[32];
    int least_4th_significant_bit;
    printf("binary number = ");
    while(n!=0)
    {
        bin[i] = n%2;
        n/=2;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        fin_binary[j]=bin[(i-1)-j];
        printf("%d",fin_binary[j]);
    }
    printf("\n4th least significant bit = %d",bin[3]);



}

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    dec_to_bin_L4(num);

}