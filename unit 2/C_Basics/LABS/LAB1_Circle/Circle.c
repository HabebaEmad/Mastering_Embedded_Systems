/*
===========================================
Name: Circle.c
Author: Habeba Emad 
============================================
*/

#include<stdio.h>
int main()
{
    while(1)
 {
float r , Area , Circumference;
char d;
printf("/r/n Enter circle radius :");
fflush(stdin);    fflush(stdout);
scanf("%f",&r);
printf("/r/nEnter your choice(a to print the area , c to print the circumference) : ");
fflush (stdin);
fflush(stdout);
scanf("%c",&d);
if (d=='a')
   {
    Area = 3.14159*r*r;
    printf("/r/nArea is %f",Area);
   }
else if (d=='c')
   {
    Circumference = 2*3.14159*r;
    printf("/r/nCircumference is %f", Circumference);
   }
else
   {
    printf("Wrong Choice");
   }
}
}   
