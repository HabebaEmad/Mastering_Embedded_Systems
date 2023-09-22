/*
===========================================
Name: HW5_2.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

struct SDistance 
{
    int m_feet;
    float m_inches;
};

struct SDistance Add_Dist(struct SDistance x, struct SDistance y)
{
    struct SDistance result;
    result.m_feet=x.m_feet +y.m_feet;
    result.m_inches= x.m_inches+ y.m_inches;
    while(result.m_inches>=12)
    {
        result.m_inches-=12;
        result.m_feet++;
    }
    return result;
}
int main()
{
   struct SDistance D1, D2 , sum;
   printf("Enter information for 1st distance:\n");
   printf("Enter feet:");
   scanf("%d",&D1.m_feet);   
   printf("Enter inches:");
   scanf("%f",&D1.m_inches);
   printf("\nEnter information for 2nd distance:\n");
   printf("Enter feet:");
   scanf("%d",&D2.m_feet);
   printf("Enter inches:");
   scanf("%f",&D2.m_inches);
   sum = Add_Dist(D1,D2);
   printf("sum of distances=%d'-%.2f\"",sum.m_feet, sum.m_inches);
}

