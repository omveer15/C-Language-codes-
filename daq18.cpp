/*Q 18. Write a program to calculate the frequency (f) of a given wave with wavelength (?) and 
speed (c), where c=?*f.*/
#include<stdio.h>
#include<math.h>
int main()
{
	float c=3*pow(10,8),frequency,wavelength;
	printf("Enter the wavelength ");
	scanf("%f",&wavelength);
	frequency=c/wavelength;
	printf("frequency = %.2f",frequency);
	return 0;
}

