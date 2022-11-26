//14.	WAP to input a matrix and print its upper triangular matrix.
#include<stdio.h>
int main()
{
	int A[10][10],i,j,M,N;
	printf("Enter the size of Matrix\n");
	scanf("%d%d/n",&M,&N);
	printf("Enter the elements\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("upper triangular Matrix\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{   
		    if(i<=j)
		    {
			printf("%d\t",A[i][j]);
		    }
		    else
		    printf("\t");
		}
		printf("\n");
	}
	return 0;
}
