/*2.Write a C program to find the eligibility of admission for a professional course based on the 
following criteria: 
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=180*/
#include<stdio.h>
int main()
{
	int m,p,c,t;
	printf("Enter the marks of Maths,Physics and Chemistry respectively\n");
	scanf("%d %d %d",&m,&p,&c);
	t=m+p+c;
	if(m>=65 && p>=55 && c>=50 && t>=180)
	    printf("Eligible");
    else printf("Not Eligible");
	   return 0;
}

