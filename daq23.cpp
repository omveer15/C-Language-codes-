//Q23. Write a program that reads nine integers. Display these numbers by printing three numbers 
//in a line separated by commas.
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i;
	printf("Enter nine integers");
	scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
	printf("%d,%d,%d\n",a,b,c);
	printf("%d,%d,%d\n",d,e,f);
	printf("%d,%d,%d",g,h,i);
	return 0;
}
