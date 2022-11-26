/*22.	WAP to input an array of N number of elements. Left rotate this array by R number of rotations and print the 
final array.
Example:- Suppose array is            4    5    3    9   1
After left rotation by 1 it will be    5   3    9     1   4                    */
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
	   	v=A[0];
	    for(i=0;i<=N-1;i++)
		A[i]=A[i+1];
		A[N-1]=v;
	   }
   printf("array elements are\n");
	  for(i=0;i<=N-1;i++)
		printf("%d\t",A[i]);
return 0;
}

