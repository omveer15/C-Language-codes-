//4.	Write a C program to compare two strings with and without function.
/*
//with function


#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],B[20];
	printf("Enter the first string");
	gets(A);
	printf("Enter the second string");
	gets(B);
	if(strcmp(A,B)==0)
	   printf("Same or identical");
	else if(strcmp(A,B)==1)
	   printf("Different and first string have more ASCII value than second string");
	else
	   printf("Different and second string have more ASCII value than first string");
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
	printf("Enter the first string");
	gets(A);
	printf("Enter the second string");
	gets(B);
	for(i=0;A[i]!='\0' && B[i]!='\0' && A[i]==B[i];i++)
	{
	}
	if(A[i]>B[i])
        	printf("Different and first string have more ASCII value than second string");
	else if(A[i]<B[i])
         	printf("Different and second string have more ASCII value than first string");
	else
        	printf("Same or identical");
	return 0;
}
