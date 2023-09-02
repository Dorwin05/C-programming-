#include<stdio.h>
#include<string.h>
int main()
{
	char c[20];
	printf("Enter the string:");
	gets(c);
	printf("\nReverse :%s",strrev(c));
	printf("\nthe number of letters in the sentence is:%d",strlen(c));	
}