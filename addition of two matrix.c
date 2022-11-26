#include<stdio.h>
int main()
{
	int M,N,P,Q,i,j,A[50][50],B[50][50];
	printf("Enter the size of First Matrix\n");
	scanf("%d  %d",&M,&N);
	printf("Enter the First Matrix\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
	printf("Enter the size of Second Matrix\n");
	scanf("%d  %d",&P,&Q);
	printf("Enter the Second Matrix\n");
	for(i=0;i<=P-1;i++)
	{
		for(j=0;j<=Q-1;j++)
		{
			scanf("%d",&B[i][j]);
		}
		printf("\n");
	}
	if(M==P && N==Q)
	{
		for(i=0;i<=M-1;i++)
     	{
		for(j=0;j<=N-1;j++)
	     	{
			printf("%d\t",(A[i][j]+B[i][j]));
		    }
	 	printf("\n");
     	}}
	else 	
	printf("Not Valid");
return 0;
}
