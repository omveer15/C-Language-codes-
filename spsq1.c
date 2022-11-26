/*1.	Write a C program to find length of a string with and without function.*/
/*
//with function
#include<stdio.h>
#include<string.h>
int main()
{
char A[100];
printf("Enter String");
gets(A);

int l=strlen(A);

printf("Length=%d",l);
return 0;
}
*/
//without function
#include<stdio.h>
#include<string.h>
int main()
{
char A[100];
int i;
printf("Enter String");
gets(A);

for(i=0;A[i]!='\0';i++)
{
}
printf("Length=%d",i);
return 0;
}
