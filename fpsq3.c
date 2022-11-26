/*3.	Write a program to input coefficients of quadratic equation and pass them to function () QUAD. 
This returnable function computes whether roots of a quadratic equation are real or imaginary.         */
#include<stdio.h>
int QUAD(int a ,int b,int c)
{
	float x;
    x=b*b-4*a*c;
	return x;
}
int main()
{
	int a,b,c;
	float v;
	printf("Enter the coefficients of quadratic equation");
	scanf("%d%d%d",&a,&b,&c);
	v=QUAD(a,b,c);
	if(v>=0)
	printf("Roots are real");
	else
	printf("Roots are imaginary");
}
