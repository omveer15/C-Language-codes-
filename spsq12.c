//12.	Write a C program to find reverse of a string with and without function.

/* 
//with function

#include<stdio.h>
#include<string.h>
int main()
{
char A[100];
printf("Enter String");
gets(A);

strrev(A);

printf("Reverse String=%s",A);
return 0;
}

*/

//without function

#include<stdio.h>
#include<string.h>
int main()
{
char A[100];
int i,j,t;
printf("Enter String");
gets(A);

for(i=0;A[i]!='\0';i++)
{
}
i=i-1;
for(j=0;j<i;j++)
{
	t=A[j];
	A[j]=A[i];
	A[i]=t;
	i--;
}
puts(A);
return 0;
}
