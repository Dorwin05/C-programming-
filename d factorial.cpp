#include<stdio.h>
int main(){
	int n,res=1,i,temp;
	temp=n;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	res*=i;
	{
		printf("\nthe factorial of %d is:%d",n,res);
	}
	return 0;
}