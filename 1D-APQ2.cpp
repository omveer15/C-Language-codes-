//2.	WAP to input an array of N number of elements and display it in reverse order.
#include<stdio.h>
int main()
{
int i,N,A[N];
printf("Enter the size of array \n");
scanf("%d",&N);
	printf("Enter the array elements\n");
	  for(i=0;i<=N-1;i++)
		scanf("%d",&A[i]);
	printf("Reverse array elements are\n");
	  for(i=N-1;i>=0;i--)
		printf("%d  ",A[i]);
return 0;
}
