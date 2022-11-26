//WAP to swap two numbers using call by value parametr passing technique.
#include<stdio.h>
void swap(int a,int b)
{
	int t;;
	t=a;
	a=b;
	b=t;
	printf("%d  %d",a,b);
}
void main()
{
	int a,b;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
