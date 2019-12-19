/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

****************************************************************************/
#include<stdio.h>

int main()
{
    char name[20];
    char sname[20];
    printf("enter your name");
    scanf("%s",name);
     printf("enter your sname");
    scanf("%s",sname);
    printf("your name is %s \n",name);
    printf("your sname is %s \n",sname);
    printf("your name is %s \t",name);
    printf("your sname is %s \n",sname);
    printf("your name is %s \b",name);
    printf("your sname is %s \n",sname);
    printf("your name is %s \r",name);
    printf("your sname is %s \n",sname);
    return 0;
}