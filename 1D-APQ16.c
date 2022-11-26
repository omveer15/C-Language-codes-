/*16.	WAP to input an array of N number of elements and sort it in descending order using bubble sort.*/
#include<stdio.h>
int main()
{
int i,N,A[50],j,t;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
for(i=0;i<=N-1;i++)
   {
	for(j=0;j<=N-i-1;j++)
	{
		if(A[j]<A[j+1])
		{
			t=A[j+1];
			A[j+1]=A[j];
			A[j]=t;
		}
	}
   }
   printf("Array in descending  form is ");
   for(i=0;i<=N-1;i++)
   {
    printf("%d\t",A[i]);
   }
return 0;
}
