/*10.Write a program to print table of sine and cos functions for the interval 0-360 degrees in increments of 30.4*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	for(i=0;i<=360;i+=30)
	{
		printf("%f\t%f\n",sin(i*3.14/180),cos(i*3.14/180));
	}
	return 0;
}
