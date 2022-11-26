//4.  WAP to input a 2D array of size M*N and display boundary elements in matrix form.
#include<stdio.h>
int main()
{
	int A[100][100],i,j,M,N;
	printf("Enter the size of 2-D array less than 100 \n");
	scanf("%d%d\n",&M,&N);
	printf("Enter the Array elements\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		scanf("%d",&A[i][j]);
	}
	printf("boundary elements in matrix form\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			if(i==0||j==0||i==M-1||j==N-1)
			printf("%d\t",A[i][j]);
			else
		    printf("\t");
		}
		printf("\n");	
	}
	return 0;
}

