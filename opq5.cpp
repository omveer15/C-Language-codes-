/*5.Write a program to divide a number by 64 without using division operator.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number to divide by 64   = ");
	scanf("%d",&a);
	b=a>>6;
	printf("%d",b);
	return 0;
}
