//23.	Write a program to generate multiplication table from 20 to 50.
#include <stdio.h>
int main() 
{
    int n,i;
    for(n=20;n<=50;n+=1)
    {
        for (i=1; i<=10;i+=1) 
	    {
        printf("%d * %d = %d \n", n, i, n * i);
        }
	printf("\n");
	}
    return 0;
}
