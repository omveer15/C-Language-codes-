/* print the format     D
                        C C
						B B B    
						A A A A          */
#include<stdio.h>
int main()
{
	int i,j;
	for(i='D';i>='A';i--)
	{   
		for(j='D';j>=i;j--)
		{
		printf("%c ",i);
	}
	printf("\n");
}
	return 0;
}
