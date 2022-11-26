/*Q33. One day, Mohan called Saurav and Sajal and gave some money to them, later he realized that 
money that was given to Saurav should be given to Sajal and vice-versa. Develop a 'C' program to 
help Mohan so that he can rectify his mistake.*/
#include<stdio.h>
int main()
{
	int saurav,sajal,c;
	printf("Enter the amount mohan give to saurav");
	scanf("%d",&saurav);
	printf("Enter the amount mohan give to sajal");
	scanf("%d",&sajal);
	c=saurav;
	saurav=sajal;
	printf("the final amount saurav have %d\n",saurav);
	printf("the final amount sajal have %d",c);	
	return 0;
}
