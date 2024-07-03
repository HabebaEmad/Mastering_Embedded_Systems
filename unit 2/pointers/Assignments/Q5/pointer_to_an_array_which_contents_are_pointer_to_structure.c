/*
===========================================
Name:Pointer_to_an_Array_of_structures.c
Author: Habeba Emad 
============================================
*/

#include"stdio.h"

struct Semployee
{
    char m_name[50];
    int m_ID;
};

int main()
{
    struct Semployee emp1 ={"Alex",1002} ,emp2 = {"habeba",2002} ;
    struct Semployee (*arr[])={&emp1 , &emp2 };
    struct Semployee (*(*ptr)[2]) = &arr;
    printf("Employee Name :%s\n ",(**(*ptr)).m_name);
    printf("Employee ID : %d ",(**(*ptr)).m_ID);
}