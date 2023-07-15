/*
===========================================
Name: Circle.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
int main()
{
    While(1)
    {
float r , Area , Circumference;
char d;
printf("Enter circle radius :");
fflush(stdin);    fflush(stdout);
scanf("%f",&r);
printf("Enter your choice(a to print the area , c to print the circumference) : ");
fflush (stdin);
fflush(stdout);
scanf("%c",&d);
if (d=='a')
   {
    Area = 3.14159*r*r;
    printf("Area is %f",Area);
   }
else if (d=='c')
   {
    Circumference = 2*3.14159*r;
    printf("Circumference is %f", Circumference);
   }
else
   {
    printf("Wrong Choice");
   }
}
}   
