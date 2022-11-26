#include<stdio.h>
int main()
{
	int M,N,P,Q,i,j,A[i][j],B[i][j];
	printf("Enter the size of First Matrix");
	scanf("%d  %d",&M,&N);
	printf("Enter the First Matrix");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			scanf("%d\t",&A[i][j]);
		}
		printf("\n");
	}
	printf("Enter the size of Second Matrix");
	scanf("%d  %d",&P,&Q);
	printf("Enter the Second Matrix");
	for(i=0;i<=P-1;i++)
	{
		for(j=0;j<=Q-1;j++)
		{
			scanf("%d\t",&B[i][j]);
		}
		printf("\n");
	}
	if(M==P && N==Q)
	{
		for(i=0;i<=M-1;i++)
     	{
		for(j=0;j<=N-1;j++)
	     	{
			printf("%d\t",A[i][j]+B[i][j]);
		    }
	 	printf("\n");
     	}}
	else
	printf("Not Valid");
    }
