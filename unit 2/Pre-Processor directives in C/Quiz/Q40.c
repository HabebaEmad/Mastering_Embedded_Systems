/*
===========================================
Name: Quiz program without main function.c
Author: Habeba Emad 
============================================
*/


#include <stdio.h>

 #define macro(n,a,i,m) m##a##i##n
 #define MAIN macro(n,a,i,m)

int MAIN()
{
printf("program without main function");
    return 0;
}