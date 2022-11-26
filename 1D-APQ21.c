/*21.	WAP to input an array of N number of elements. Input the element you want to delete and delete all 
occurrence of that element from that array. Print the updated array. */
#include<stdio.h>
int main()
{
int i,N,A[50],E,p;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
printf("Enter the element you want to delete\n ");
    scanf("%d",&E);
	for(i=0;i<=N-1;i++)
    {
	if(E==A[i])
      {
       for(i;i<=N-1;i++)
       A[i]=A[i+1];	
	  }
    }
	printf("The New Array is\n");
    for(i=0;i<N-1;i++)
      	printf("%d ",A[i]);
return 0;
}
