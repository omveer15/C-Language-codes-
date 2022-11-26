//13.	WAP to input 2 matrixes and multiply them.
#include<stdio.h>
int main()
{
	int M,N,P,Q,i,j,A[10][10],B[10][10],k,C[10][10],s=0;
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
	if(N==P)
	{
		for(i=0;i<=M-1;i++)
     	{
		for(j=0;j<=Q-1;j++)
	     	{
	     		for(k=0;k<=P-1;k++)
	     		{
			     s=s+A[i][k]*B[k][j];
		        }
	 	C[i][j]=s;
	 	s=0;
	       }
     	}
    }
	else	
	printf("Not Valid");
	printf("The multiply of Matrix is :\n");
	for(i=0;i<=M-1;i++)
     	{
		for(j=0;j<=Q-1;j++)
	     	{
			printf("%d\t",C[i][j]);
		    }
	 	printf("\n");
	    }
return 0;
}
