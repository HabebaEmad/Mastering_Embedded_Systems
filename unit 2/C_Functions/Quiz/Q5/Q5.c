/*
===========================================
Name: Q5.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

int Power();
int product =1;
int clear(int number, int bit_position)
{
    if (bit_position==0)
    {
        number--;
        return number;
    }
    else
    {
    number-=Power(2,bit_position);
    return number;
    }
}

int main()
{
    int number, bit_position;
    printf("Input Number= ");
    scanf("%d",&number);
    printf("Bit position= ");
    scanf("%d", &bit_position);
    printf("result = %d",clear(number, bit_position));
}

int Power(int base_number,int power_number)
{
    if(power_number>0)
    {
        product*=base_number;
        power_number--;
        Power(base_number,power_number);
    }
    return product;
}