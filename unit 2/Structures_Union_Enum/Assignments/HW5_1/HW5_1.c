/*
===========================================
Name: HW5_1.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

struct Sstudents 
{
    char m_name[50];
    int m_roll ;
    float m_marks;
};

int main()
{
    struct Sstudents s;
    printf("Enter name:");
    scanf("%s",&s.m_name);
    printf("Enter roll number:");
    scanf("%d",&s.m_roll);
    printf("Enter marks:");
    scanf("%f",&s.m_marks);
    printf("\n\nname: %s\nRoll: %d\nMarks: %.2f",s.m_name , s.m_roll,s.m_marks);
}