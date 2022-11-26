//if else if ladder   -> For two or more conditions
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no.");
	scanf("%d",&n);
	if(n>0)
	    printf("Positive");
	else if(n<0)
	    printf("Negative");
	else
	    printf("Zero"); 
	return 0;
}
