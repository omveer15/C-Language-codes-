/*16.	WAP to input a matrix and print it in zig zack form.
Example :- if matrix is                   1 2 3 4
                                          5 6 7 8
                                          9 1 2 3
                                          4 5 9 1
Then output matrix will be 
1 2 3 4
8 7 6 5
9 1 2 3
1 9 5 4
*/
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
	printf("Zig Zack Matrix is \n");
	for(i=0;i<=M-1;i++)
	{  
		    if(i%2==0)
		    {
		    for(j=0;j<=N-1;j++)
			printf("%d\t",A[i][j]);
		    }
		    else
		    {
            for(j=N-1;j>=0;j--)
            printf("%d\t",A[i][j]);
			}
		printf("\n");
	}
	return 0;
}
