#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("enter the number=\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
printf("it is armstrong number");
else
printf("it is not armstrong number");
return 0;
}

