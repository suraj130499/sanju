/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    puts("enter a charcter");
    ch=getc(stdin);
    fflush(stdin);
    puts("the entered charcter is");
    putc(ch,stdout);
    return 0;
}
