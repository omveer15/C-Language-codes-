//WAP to input an array through pointer and display through pointer.
#include<stdio.h>
int main()
{
	int A[6],*p,i,n;
	p=A;
	printf("Enter the size of array\n");
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",p+i);
	}
		printf("%u\t%u\t%u\t%u",&A[0],A,&*(A+1),*(A+1));
	return 0;
}
