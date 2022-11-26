//11.	Write a program in C to calculate determinant of a 3 x 3 matrix.
 #include<stdio.h>
 int main()
{
 	int i,j,A[3][3],D;
    printf("\n Please Enter the Matrix Elements \n");
 	for(i=0;i<=2;i++)
  	{
   		for(j=0;j<=2;j++)
      		scanf("%d",&A[i][j]);
  	}
     
    D=A[0][0]*((A[1][1]*A[2][2])-(A[1][2]*A[2][1]))  - A[0][1]*((A[1][0]*A[2][2])-(A[1][2]*A[2][0])) +  A[0][2]*((A[1][0]*A[2][1])-(A[1][1]*A[2][0]));
	printf("Determinant = %d",D);
 	return 0;
}
