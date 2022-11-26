/* print the format     A
                        B A
						C B A   
						D C B A         */
#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='D';i++)
	{   
		for(j=i;j>='A';j--)
		{
		printf("%c ",j);
	}
	printf("\n");
}
	return 0;
}
