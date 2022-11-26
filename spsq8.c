//8.	Write a C program to find total number of alphabets, digits or special character in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20];
	int i,a=0,s=0,d=0;
	printf("Eneter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++)
	{
		if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z'))
		{
		        a++;
	    }
		else if(A[i]>='0' && A[i]<='9')
	    {	
			    d++;
		}
		else
		{
			    s++;
		}
	}
	printf("String contains \nAlphabets=%d\nDigits=%d\nSpecial Characters=%d",a,d,s);
	return 0;
}
