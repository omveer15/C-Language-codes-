//1.Write a program to calculate x^n without using library function pow( ) but using user defined function.
#include<stdio.h>
int pwr(int x ,int n)
{
	int t=1,i;
	for(i=1;i<=n;i++)
	{
		t=x*t;
	}
	return t;
}
int main()
{
	int x,n;
	printf("Enter the base and power resp.");
	scanf("%d%d",&x,&n);
	printf("The Value is %d",pwr(x,n));
}
