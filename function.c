#include<stdio.h>
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
int main()
{
	int a,b,m;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	m=mul(a,b);
	printf("%d",m);
}

