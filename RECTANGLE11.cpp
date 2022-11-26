/* print the format     D D D D
                        C C C C 
                        B B B B 
                        A A A A 
                           */
#include<stdio.h>
int main()
{
	int i,j;
	for(i='D';i>='A';i--)
	{
		for(j=1;j<=4;j++)
		printf("%c ",i);
	printf("\n");
	}
	return 0;
}
