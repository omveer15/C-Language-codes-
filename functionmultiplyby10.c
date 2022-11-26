//WAP to input a number and multiply it by 10 using call by value.

#include<stdio.h>
void mul(int n)
{
	n=n*10;
	printf("%d",n);
	
}
void main()
{
	int n;
	printf("Enter number ");
	scanf("%d",&n);
	mul(n);
	printf("\n%d",n);
}
