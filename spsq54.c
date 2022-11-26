//54. Write a C program to remove the white spaces from a string
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],c;
	int i,t;
	printf("Enter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]==' ')
		{
		 t=A[i];
		 A[i]=A[i+1];
		 A[i+1]=t;
	    }
	}
    printf("The new string is\n");
    puts(A);
	return 0;
}
