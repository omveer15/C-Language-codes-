//3.	WAP to input an array of N number of elements and find the sum and average of all the elements of that array.
#include<stdio.h>
int main()
{
int i,N,A[N],s=0;
float avg;
printf("Enter the size of array \n");
scanf("%d",&N);
	printf("Enter the array elements\n");
	  for(i=0;i<=N-1;i++)
	  {
		scanf("%d",&A[i]);
		s=s+A[i];
	  }
	  avg=(float)s/N;
	printf("Sum of array elements is %d \n",s);
	printf("Average of array elements is %f",avg);
return 0;
}
