/*Q13.The population of a city is 30000. It increases by 20 % during first year and 30% during the 
second year. Write a program to find the population after two years? (Ans: 46800)*/
#include <stdio.h>
int main()
{
	long int ip=30000,fyp,syp;
	fyp=ip+ip*20/100;
	syp=fyp+fyp*30/100;
	printf("the population of city after one years  = %ld\n",fyp);
	printf("the population of city after two years  = %ld",syp);
	return 0;
}
