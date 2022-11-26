/* print the format     D C B A
                        D C B A
						D C B A
						D C B A  */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j='D';j>='A';j--)
		printf("%c ",j);
	printf("\n");
	}
	return 0;
}
