//13.	Write a C program to check whether a string is palindrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
char A[100],B[100];
int i,p=0;
printf("Enter String");
gets(A);
for(i=0;A[i]!='\0';i++)
{
	B[i]=A[i];
}
strrev(A);
for(i=0;A[i]!='\0';i++)
{
	if(B[i]==A[i])
	{
		p+=1;
	}
}
for(i=0;A[i]!='\0';i++)
{
}
if(p==i)
   printf("Pallindrome");
else
   printf("Not Pallindrome");
return 0;
}

