//7.	WAP to input a 2D array and display diagonal elements in matrix form.
#include<stdio.h>
int main()
{
	int A[100][100],i,j,M,N;
	printf("Enter the size of 2-D array less than 100 \n");
	scanf("%d%d/n",&M,&N);
	printf("Enter the Array elements\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		scanf("%d",&A[i][j]);
	}
	if(M!=N)
	{
		printf("Diagonal Elements Does not exists");
    }
	else
	{
	printf("diagonal elements in matrix form are\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			if(i==j)
			printf("%d\t",A[i][j]);
			else
		    printf("\t");
		}
		printf("\n");	
	}}
	return 0;
}

