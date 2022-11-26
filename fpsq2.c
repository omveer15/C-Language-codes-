/*2.	Write a program that input the meal charge of a customer.  The tax should be 20% of the meal cost.  
The tip should be 15% of the total after adding the tax.  Display the total bill on the screen using 
function.                 */
#include<stdio.h>
void tb(int x)
{  
    float t;
	t=(x+0.2*x)+0.15*(x+0.2*x);
	printf("Total bill= %f",t);
}
void main()
{
	int x;
	printf("Enter the meal charge");
	scanf("%d",&x);
	tb(x);
}
