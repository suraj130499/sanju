#include<stdio.h>
int main()
{
    int a,b,c ;
   scanf("%d%d%d", &a,&b,&c);
   if(a>b&&a>c)
   {
       printf("a is largert");
       
   }
   else if(b>c&&b>a)
   {
   	printf("b is largest");
   }
   else 
   printf("c is a largest");
   return 0;
}

