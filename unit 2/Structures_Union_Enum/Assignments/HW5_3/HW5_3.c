/*
===========================================
Name: HW5_3.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

struct SComplex
{
    double m_R; //Real part
    double m_I; //Imaginary part
};

struct SComplex ReadComplex (char name[])
{
    struct SComplex complex;
    printf("Enter Real and imaginary respectively:");
    scanf("%lf %lf",&complex.m_R, &complex.m_I);
    return complex;
}

struct SComplex AddComplex ( struct SComplex A , struct SComplex B)
{
    struct SComplex C;
    C.m_R = A.m_R + B.m_R;
    C.m_I = A.m_I + B.m_I;
    return C;
}

void PrintComplex (char name[],struct SComplex Z)
{
    printf("%s=%.2lf+%.2lfi\r\n",name, Z.m_R, Z.m_I);
}

int main()
{
    printf("For 1st complex number:\n");
    struct SComplex A =ReadComplex("A");
    printf("\nFor 2nd complex number:\n");
    struct SComplex B = ReadComplex("B"); 
    struct SComplex C = AddComplex(A,B);
    PrintComplex("Sum",C);
}