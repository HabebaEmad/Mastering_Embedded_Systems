/*
===========================================
Name: HW5_4.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>

struct Sstudents 
{
    char m_name[50];
    float m_marks;
};

struct Sstudents Info_Entry(struct Sstudents student)
{
    printf("Enter name:");
    scanf("%s",&student.m_name);
    printf("Enter marks:");
    scanf("%f",&student.m_marks);
    return student;
}

void print (struct Sstudents student)
{
    printf("Name: %s\n",student.m_name);
    printf("marks: %.2f\n",student.m_marks);
}

int main()
{
    struct Sstudents s[10];
    printf("Enter information of students:\n");
    for(int i=0 ; i<10 ;i++)
    {
        printf("For roll number %d\n",i+1);
        s[i] = Info_Entry(s[i]);
    }
    printf("Displaying information of students:");
    for(int j=0; j<10; j++)
    {
        printf("Information for roll number %d:\n",j+1);
        print(s[j]);
    }

}