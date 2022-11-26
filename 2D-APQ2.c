//2.	WAP to input a 2D array of size M*N and find the sum and average of all the elements.
#include<stdio.h>
int main()
{
	int A[100][100],i,j,M,N,s=0;
	float avg;
	printf("Enter the size of 2-D array less than 100 \n");
	scanf("%d%d/n",&M,&N);
	printf("Enter the Array elements\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
		s=s+A[i][j];
		}
	}
	avg=(float)s/(M*N);
    printf("The sum of array elements is=%d \n",s);
    printf("The average of array elements is=%f \n",avg);
	return 0;
}

