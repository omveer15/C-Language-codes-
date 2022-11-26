//5.	Write a C program to convert lowercase string to uppercase.
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20];
	printf("Eneter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]>='a' && A[i]<='z')
		{
			A[i]=A[i]+32;
		}
	}
	printf("the new string is\n");
	gets(A)
	return 0;
}
