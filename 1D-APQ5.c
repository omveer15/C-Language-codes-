/*5.	WAP to input an array of N number of elements and store all even numbers in 1 array and all odd numbers 
in another array. Print both the even and odd array separately.*/
#include<stdio.h>
int main()
{
int i,N,A[100],O[100],E[100],j=0,k=0;
printf("Enter the size of array \n");
scanf("%d",&N);
	printf("Enter the array elements\n");
	  for(i=0;i<=N-1;i++)
	  {
		scanf("%d",&A[i]);
		if(A[i]%2==0)
		  E[k++]=A[i];
		else
		  O[j++]=A[i];
	  }
	printf("Even Array\n");
	for(i=0;i<=k-1;i++)
	       printf("%d \n",E[i]);
	printf("Odd Array\n");
	for(i=0;i<=j-1;i++)
	       printf("%d ",O[i]);
return 0;
}
