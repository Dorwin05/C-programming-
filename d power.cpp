#include<stdio.h>
int main()
{
	int a,b,i,result=1;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		result=result*a;
	}
	printf("Power is:%d",result);
	
	return 0;
}