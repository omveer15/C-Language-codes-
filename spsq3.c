//3.	Write a C program to concatenate two strings with and without function.

/* with function
// strcat(a,b)    a stores the value

#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],B[20];
	printf("Enter the first string");
	gets(A);
	printf("Enter the second string");
	gets(B);
	strcat(A,B);
	puts(A);
	return 0;
}

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],B[20];
	int i,j;
	printf("Enter the first string");
	gets(A);
	printf("Enter the second string");
	gets(B);
	for(i=0;A[i]!='\0';i++)
	{
	}
	for(j=0;B[j]!='\0';j++)
	{
		A[i]=B[j];
		i++;
	}
	A[i]='\0';
	puts(A);
	return 0;
}


