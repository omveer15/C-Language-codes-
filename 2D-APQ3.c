//3.	WAP to input a 2D array of size M*N and find the sum of individual rows and individual columns.
#include<stdio.h>
int main()
{
	int A[100][100],i,j,M,N,R=0,C=0;
	printf("Enter the size of 2-D array less than 100 \n");
	scanf("%d%d\n",&M,&N);
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
        	R=R+A[i][j];
        }
	    printf("Sum Of %d row =%d\n",i+1,R);
	    R=0;
    }
    	for(j=0;j<=N-1;j++)
	{
	   for(i=0;i<=M-1;i++)
     	{
        	C=C+A[i][j];
        }
	    printf("Sum Of %d Column =%d\n",j+1,C);
	    C=0;
    }
	return 0;
}
