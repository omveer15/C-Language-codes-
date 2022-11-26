/* print the format     1
                        2 5
						3 6 8  
						4 7 9 10         */
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{   k=i;
		for(j=1;j<=i;j++)
		{
		printf("%d ",k);
        k=k+4-j;
	    }
	printf("\n");
}
	return 0;
}
