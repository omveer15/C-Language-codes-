/*27.	WAP to input an array of N elements and delete all the elements from that array which are perfect number.*/
#include<stdio.h>
int main()
{
	int N,A[50],i,s=0,j;
	printf("Enter the size of array less than 50\n");
	scanf("%d",&N);
	printf("Enter the array elements \n");
	for(i=0;i<=N-1;i++)
	   scanf("%d",&A[i]);
	for(i=0;i<=N-1;i++)
	{
		for(j=1;j<A[i];j++)
		{
			if(A[i]%j)
			s=s+j;
		}
		if(s==A[i])
		A[i]=A[i+1];
	}
	for(i=0;i<=N-1;i++)
	printf("%d",A[i]);
	return 0;
}
