//15.	Write a C program to find first occurrence of a character in a given string.
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
		  break;
	    }
	}
	if(v==1)
	{
		printf("Character is found at position=%d",i+1);
	}
	else
	{
	printf("Charater not found");
    }
	return 0;
}
