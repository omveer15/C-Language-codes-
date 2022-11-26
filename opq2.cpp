//2.Write a program to find the lowest marks of three students using conditional operator.
#include<stdio.h>
int main()
{
	int a,b,c,s;
	printf("Enter 3 numbers  =  ");
	scanf("%d %d %d",&a,&b,&c);
	s=a<b?a:b;
	s=s<c?s:c;
	printf("%d",s);
	return 0;
}
