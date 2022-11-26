/* print the format     1 1 1 1 1
                        2 2 2 2 2 
						3 3 3 3 3
						4 4 4 4 4  */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=5;j>=1;j--)
		printf("%d ",i);
	printf("\n");
	}
	return 0;
}
