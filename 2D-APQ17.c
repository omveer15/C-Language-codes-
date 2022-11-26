/*17.	Suppose there is a game known as "MATCH THE TABLES", in which the player picks up two tables(each having
 10 rows and 10 columns) and matches them. If out of 100 entries at least 90 corresponding entries match then 
 the tables are said to be identical and the player is declared the winner. Wap in 'C' to implement the above game.*/
#include<stdio.h>
int main()
{
	int i,j,A[10][10],B[10][10],s=0;
	printf("Enter the First Matrix\n");
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}

	printf("Enter the Second Matrix\n");
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			scanf("%d",&B[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<=9;i++)
     	{
		for(j=0;j<=9;j++)
	     	{
		       if(A[i][j]==B[i][j])
		        s=s+1;
		    }
        }
	if(s>=90)	
	printf("Player is winner");
	else
	printf("Player lost");
return 0;
}
