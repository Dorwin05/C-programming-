#include<stdio.h>
int main()
{
	int a=0,b=1,temp,i,n;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	n=n-2;
	printf("01");
	for (i=0;i<n;i++)
	{
		temp=a+b;
		a=b;b=temp;
		printf("%d",temp);
	}
	return 0;
}