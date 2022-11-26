/*Q15. Write a program to calculate salary of an employee, given his basic pay (entered by user), 
HRA=15% of the basic pay and TA=20% of the basic pay.*/
#include <stdio.h>
int main()
{
	float bp,ts;
	printf("Enter the basic pay ");
	scanf("%f",&bp);
	ts=(bp*15/100)+(bp*20/100)+bp;
	printf("Salary of an employee = %f",ts);
	return 0;
}
