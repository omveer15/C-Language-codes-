//11.	Write a C program to count total number of words in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20];
	int i,v=0;
	printf("Eneter the string\n");
	scanf("%[^\n]",A);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]==' ' && A[i+1]!=' ')
		{
		  v++;
	    }
	}
	printf("Total No. of words=%d",v+1);
	return 0;
}
