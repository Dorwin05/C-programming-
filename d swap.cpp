#include<stdio.h>
int main()
{
	int a,b,temp,i,n;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d,b=%d",a,b);
}