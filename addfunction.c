//WAP to input two integers and add them using function.
#include<stdio.h>
int add(int,int);
int main()
{
   int a,b,sum;
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   sum=add(a,b);
   printf("%d",sum);
}

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
