/*4.	WAP to input an array of N number of elements and count total number of positives, negatives and zero 
elements in that array and display those counts.*/
#include<stdio.h>
int main()
{
int i,N,A[N],PE=0,NE=0,Z=0;
printf("Enter the size of array \n");
scanf("%d",&N);
	printf("Enter the array elements\n");
	  for(i=0;i<=N-1;i++)
	  {
		scanf("%d",&A[i]);
		if(A[i]>0)
		   PE++;
		else if(A[i]<0)
		   NE++;
		else
		   Z++;
	  }
	printf("Positive=%d\n Negative=%d\n Zero=%d",PE,NE,Z);
return 0;
}
