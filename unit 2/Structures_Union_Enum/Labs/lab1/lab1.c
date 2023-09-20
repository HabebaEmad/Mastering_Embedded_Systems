/*
===========================================
Name: lab1.c
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
    printf("Enter Real part of complex %s:", name);
    scanf("%lf",&complex.m_R);
    printf("Enter Imaginary part of complex %s:", name);
    scanf("%lf",&complex.m_I);
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
    printf("%s = (%lf) + j(%lf)\r\n",name, Z.m_R, Z.m_I);
}

int main()
{
    struct SComplex A =ReadComplex("A");
    struct SComplex B = ReadComplex("B"); 
    struct SComplex C = AddComplex(A,B);
    PrintComplex("C",C);
}
