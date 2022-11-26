/* print the format     1  5  9  13
                        2  6  10 14  
						3  7  11 15
						4  8  12 16  */
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		k=i;
		for(j=1;j<=4;j++)
		{
		printf("%d ",k);
		k=k+4;
	    }
	printf("\n");
	}
	return 0;
}
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=16;j=j+4)
		printf("%d ",j);
	printf("\n");
	}
	return 0;
}
*/
