/* print the format     4 4 4 4 4
                        3 3 3 3 3  
						2 2 2 2 2
						1 1 1 1 1   */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=5;j>=1;j--)
		printf("%d ",i);
	printf("\n");
	}
	return 0;
}
