//17.	Write a C program to search all occurrences of a character in given string.
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
		 printf("Character is found at position=%d\n",i+1); 
	    }
	}
	if(v==0)
	{
			printf("Charater not found");
	}
	else
	{
    }
	return 0;
}
