//wap to which input a radius from user and find its area and perimeter.

#include<stdio.h>
int main()
{
	float r,area,perimeter,pie=3.14;
	printf("Enter the value of radius");
	scanf("%f",&r);
	area=pie*r*r;
	perimeter=2*pie*r;
	printf("area of circle of radius %f= %f Perimeter =%f\n",r,area,perimeter);
	printf("area of circle of radius %.2f= %.2f Perimeter =%.2f",r,area,perimeter);
	return 0;
}

