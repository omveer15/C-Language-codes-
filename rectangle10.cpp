/* print the format     A A A A 
                        B B B B 
						C C C C 
						D D D D   */
#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='D';i++)
	{
		for(j=1;j<=4;j++)
		printf("%c ",i);
	printf("\n");
	}
	return 0;
}
