/*3.	Write a program to find the size of all data types (int, float, char, double, 
long double, short int etc.).*/
#include<stdio.h>
int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(unsigned char));
	printf("%d\n",sizeof(short int));
	printf("%d\n",sizeof(unsigned int));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(unsigned int));
	printf("%d\n",sizeof(long int));
	printf("%d\n",sizeof(unsigned long int));
	printf("%d\n",sizeof(long long int));
	printf("%d\n",sizeof(unsigned long long int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(long double));
	return 0;
}
