//9.	WAP to input a matrix and check if its identity matrix or not.
#include<stdio.h>
int main()
{
 	int i,j,R,C,A[10][10],F=1;
    printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &R, &C);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(i= 0;i<=R-1;i++)
  	{
   		for(j= 0;j<=C-1;j++)
    	{
      		scanf("%d",&A[i][j]);
    	}
  	}
     
 	for(i= 0;i<=R-1;i++)
  	{
   		for(j= 0;j<=C-1;j++)
    	{
    		if(A[i][j]!=1 && A[i][j]!=0)
    		{
    			F=0;
    			break;
			}
   	 	}
  	}
  	if(F==1)
  		printf("\n The Matrix that you entered is an Identity Matrix ");
	else
		printf("\n The Matrix that you entered is Not an Identity Matrix ");
  	return 0;
}
