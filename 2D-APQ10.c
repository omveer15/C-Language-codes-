//10.	WAP to input a matrix of order M*N and check if it's sparse or dense matrix.
 #include<stdio.h>
 int main()
{
 	int i,j,R,C,A[10][10],T=0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &R, &C);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(i=0;i<=R-1;i++)
  	{
   		for(j=0;j<=C-1;j++)
    	{
      		scanf("%d",&A[i][j]);
    	}
  	}
     
     
 	for(i=0;i<=R-1;i++)
  	{
   		for(j=0;j<=C-1;j++)
    	{
    		if(A[i][j]==0)
    			T++;    		
   	 	}
  	}
  	if(T>(R*C)/2)
  		printf("\n The Matrix that you entered is a Sparse Matrix ");
	else
		printf("\n The Matrix that you entered is Not a Sparse Matrix ");
 	return 0;
}
