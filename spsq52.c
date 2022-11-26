/*52. Write a C program that reads the name of a person as input and print the name in an abbreviated fashion, 
e.g., Dennis Ritchie as D.R.                      */
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],c;
	int i,t;
	printf("Enter the string\n");
	gets(A);
	printf("The abbreviated name= %c.",A[0]);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]==' ')
		{
		printf("%c.",A[i+1]);
	    }
	}
	return 0;
}
