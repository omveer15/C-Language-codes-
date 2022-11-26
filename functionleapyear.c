#include<stdio.h>
int checkleap(int a)
{
	if(a%400==0 || (a%4==0 && a%100!=0))
	return 1;
	else
	return 0;
}
int main()
{
	int a,m;
	printf("Enter the year");
	scanf("%d",&a);
	m=checkleap(a);
	if(m==1)
	   printf("Leap Year");
	if(m==0)
	   printf("Not Leap Year");
}
