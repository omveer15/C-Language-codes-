/*23.	WAP to input an array of N number of elements. Right rotate this array by R number of rotations and print 
the final array.
Example:- Suppose array is               4    5    3    9   1
After Right rotation by 1 it will be   1    4     5    3   9                   */
#include<stdio.h>
int main()
{
   int i,N,A[50],v,r,j;
   printf("Enter the size of array less than 50 \n");
     scanf("%d",&N);
   printf("Enter the array elements\n");
	 for(i=0;i<=N-1;i++)
		scanf("%d",&A[i]);
	printf("Enter the no. of rotations\n");
	  scanf("%d",&r);
	   for(j=1;j<=r;j++)
	   {
	   	v=A[N-1];
	    for(i=N-1;i>=0;i--)
		A[i+1]=A[i];
		A[0]=v;
	   }
   printf("array elements are\n");
	  for(i=0;i<=N-1;i++)
		printf("%d\t",A[i]);
return 0;
}

