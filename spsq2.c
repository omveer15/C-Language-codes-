//2.	Write a C program to copy one string to another string with and without function.
/*
//with function

#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],B[20];
	printf("Enter the string");
	gets(A);
	strcpy(B,A);
	puts(B);
	return 0;
}

*/



//without function

#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],B[20];
	int i;
	printf("Enter First string");
	gets(A);
	for(i=0;i<=A[i]!='\0';i++)
	{
		B[i]=A[i];
	}
	B[i]='\0';
	printf("The Copied string=%s",B);
	return 0;
}
