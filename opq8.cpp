/*8.Write a program to find out whether inputted number is even or odd without 
using arithmetic operators.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number = ");
	scanf("%d",a);
//	a%2==0 ? printf("Even") : printf("Odd");
//	a-(a/2)*2==0 ? printf("Even") : printf("Odd");
//	a-((a>>1)<<1)==0 ? printf("Even") : printf("Odd");
//	a==(a>>1)<<1 ? printf("Even") : printf("Odd");
//	(a&1)==0 ? printf("Even") : printf("Odd");
	(a^1)<a ? printf("Odd") : printf("Even");
	return 0;
} 
