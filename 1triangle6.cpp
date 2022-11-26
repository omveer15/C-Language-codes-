/* print the format     A
                        B B
						C C C   
						D D D D         */
#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='D';i++)
	{   
		for(j='A';j<=i;j++)
		{
		printf("%c ",i);
	}
	printf("\n");
}
	return 0;
}
