/*4.	Write a program to multiply a number by 16 without using multiplication or 
addition operator.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number = ");
	scanf("%d",&a);
	b=a<<4;
	printf("%d",b);
	return 0;
}
