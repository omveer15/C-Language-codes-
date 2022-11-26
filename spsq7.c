//7.	Write a C program to toggle case of each character of a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20];
	int i;
	printf("Eneter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]>='A' && A[i]<='Z')
		{
		        A[i]=A[i]+32;
	    }
		else if(A[i]>='a' && A[i]<='z')
	    {	
			    A[i]=A[i]-32;
		}
	}
	printf("the new string is\n");
	puts(A);
	return 0;
}
