/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//write a program to accpet a number only 2 digit no same digit then 0 else difference 
#include<stdio.h>
int main()
{
int x;
scanf("%2d",&x);
printf("%d",x/10-x%10);
}
