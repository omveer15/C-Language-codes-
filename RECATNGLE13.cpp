/* print the format     A E I M
                        B F J N
						C G K O
						D H L P         */
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i='A';i<='D';i++)
	{   
	    k=i;
		for(j=1;j<=4;j++)
		{
		printf("%c ",k);
		k=k+4;
	}
	printf("\n");
}
	return 0;
}
