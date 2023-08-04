/*
===========================================
Name: HW4_4.c
Author: Habeba Emad 
============================================
*/
#include <stdio.h>

int Power(int base_number,int power_number)
{
    static int product =1;
    if(power_number>0)
    {
        product*=base_number;
        power_number--;
        Power(base_number,power_number);
    }
    return product;
}

int main()
{
    int base_number , power_number;
    printf("Enter base number: ");
    scanf("%d",&base_number);
    printf("Enter power number(positive integer): ");
    scanf("%d",&power_number);
    printf("%d^%d = %d",base_number,base_number,Power(base_number,power_number));
}