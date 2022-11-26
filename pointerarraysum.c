//WAP to input an array through pointer and display its sum and the array through pointer.
#include<stdio.h>
int main()
{
	int A[6],*p,i,n,s=0;
	p=A;
	printf("Enter the size of array\n");
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",p+i);
		s=s+*(p+i);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d\t",*(p+i));
	}
	printf("\nSum=%d",s);
	return 0;
}
