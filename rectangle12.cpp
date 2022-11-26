/* print the format     A B C D
                        E F G H 
                        I G K L
						M N O P   */
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i='A';i<='M';i=i+4)
	{   
	    k=i;
		for(j=1;j<=4;j++)
		{
		printf("%c ",k);
		k++;
	}
	printf("\n");
}
	return 0;
}
