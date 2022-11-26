/*26.	Write a C program to print the following pattern of stars and alphabets having n rows:-
			           	*
			           *A*
			          *A*A*
			         *A*A*A*                     */

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{   
		for(j=i;j<=3;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		if(j%2==0)
		printf("A");
		else printf("*");
		printf("\n");
	}
return 0;
}
	
