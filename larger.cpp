#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<150)
	{
		printf("dwaf");
	}
	else if(a>150&&a<165)
	{
		printf("averge height");
		
	}
	else if(a>166&&a<190)
{
	printf("tall");
	}
	if(a>90)
    {
	printf("abnormal height");
 }
else 
printf(" invlid input");
	return 0;
}
