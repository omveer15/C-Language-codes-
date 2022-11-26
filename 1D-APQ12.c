/*12.	WAP to input an array of N number of elements and find the second smallest element and 2nd largest 
element in that array.*/
#include<stdio.h>
int main()
{
int i,N,A[N],j,t;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
for(i=0;i<=N-1;i++)
   {
	for(j=0;j<=N-i-1;j++)
	{
		if(A[j]>A[j+1])
		{
			t=A[j];
			A[j]=A[j+1];
			A[j+1]=t;
		}
	}
   }
      
    printf("Second Largest Value is %d\n",A[N-2]);
    printf("Second smallest Value is %d",A[1]);
return 0;
}
