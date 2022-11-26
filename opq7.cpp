//7.Write a program to multiply a number by 65 without using multiplication operator.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number = ");
	scanf("%d",&a);
	b=(a<<6)+a;
	printf("%d",b);
	return 0;
}
