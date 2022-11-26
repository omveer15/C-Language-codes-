//8.	WAP to input 2 matrices from the user and add them.
#include<stdio.h>
int main()
{
	int A[100][100],B[100][100],i,j,M,N,X,Y;
	printf("Enter the size of 1st Matrix \n");
	scanf("%d%d\n",&M,&N);
	printf("Enter the Array elements\n");
	for(i=0;i<=M-1;i++)
	{
		for(j=0;j<=N-1;j++)
			scanf("%d",&A[i][j]);
	}
	printf("Enter the size of 2nd Matrix \n");
	scanf("%d%d/n",&X,&Y);
	printf("Enter the Array elements\n");
	for(i=0;i<=X-1;i++)
	{
		for(j=0;j<=Y-1;j++)
			scanf("%d",&B[i][j]);
	}
	if(M!=X && N!=Y)
	printf("Sum not Possible ");
	else
	{
		printf("The sum of matrices is \n");
       for(i=0;i<=M-1;i++)
	   {
		for(j=0;j<=N-1;j++)
			printf("%d\t",A[i][j]+B[i][j]);
		printf("\n");
    	}
    }
	return 0;
}
