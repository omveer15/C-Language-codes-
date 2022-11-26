//6.	WAP to input a 2D array and find the sum of its diagonal elements.
#include<stdio.h>
int main()
{
	int A[100][100],i,j,M,N,s=0;
	printf("Enter the size of 2-D array less than 100 \n");
	scanf("%d%d\n",&M,&N);
	printf("Enter the Array elements\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		scanf("%d",&A[i][j]);
	}
	if(M!=N)
	printf("Diagonal Elements Does not exists");
	else
	{
        for(j=0;j<=N-1;j++)
     	{
		for(i=0;i<=M-1;i++)
			{
				if(i==j)
				s=s+A[i][j];
			}
    	}
    printf("The sum of The Diagonal Element is %d",s);
    }
	return 0;
}
