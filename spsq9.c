/*  9.	WAP to input a string and copy all the vowels , consonants , digits and special characters in 4 different 
strings then display those 4 strings.    */
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20],V[20],C[20],D[20],S[20];
	int i,v=0,c=0,d=0,s=0;
	printf("Enter the string\n");
	gets(A);//omveer5969@
	for(i=0;A[i]!='\0';i++)
	{  
	    if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z'))
	    {
	     	if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
	       	{
		        V[v++]=A[i];
	        }
	        else
	        {
	        	C[c++]=A[i];
			}
	    }
		else if(A[i]>='0' && A[i]<='9')
	    {	
			    D[d++]=A[i];
		}
		else
		{
			    S[s++]=A[i];
		}
	}
	printf("Vovels=%s\nConstants=%s\nDigits=%s\nSpecial Characters=%s",V,C,D,S);
	return 0;
}
