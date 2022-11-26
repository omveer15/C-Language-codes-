/*24.	WAP to input an array of N number of elements and find the frequency of an inputted element in that array.*/
#include<stdio.h>
int main()
{
int i,N,A[50],E,f=0;
     printf("Enter the size of array \n");
     scanf("%d",&N);
     printf("Enter the array elements\n");
	 for(i=0;i<=N-1;i++)
		scanf("%d",&A[i]);
     printf("Enter the element to find the frequency  \n");
     scanf("%d",&E);
	for(i=0;i<=N-1;i++)	
	{
		if(E==A[i])
		f=f+1;
	}
printf("Frequency of %d is %d times ",E,f);
return 0;
}
