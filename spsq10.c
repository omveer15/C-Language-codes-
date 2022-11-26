//10.	Write a C program to count total number of vowels and consonants in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20];
	int i,v=0,c=0;
	printf("Eneter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++)
	{
		if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z'))
		{
		        	if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
	       	{
		        v++;
	        }
	        else
	        {
	        	c++;
			}
	    }
	
	}
	printf("Vovels=%d\nConstant=%d",v,c);
	return 0;
}
