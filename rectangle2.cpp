/* print the format     1 2 3 4 5
                        1 2 3 4 5
                        1 2 3 4 5
						1 2 3 4 5   */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		printf("%d ",j);
	printf("\n");
	}
	return 0;
}