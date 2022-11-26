//18.	Write a C program to count occurrences of a character in given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],c;
	int i,v=0;
	printf("Enter the string\n");
	gets(A);
	printf("Enter a character to search");
	scanf("%c",&c);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]==c)
		{
		 v++;
	    }
	}
    printf("Charater occurance of %c = %d",c,v);
	return 0;
}
