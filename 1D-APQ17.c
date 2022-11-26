/*17.	WAP to input an array of N number of elements. Input an element you want to insert in that array along with 
the position and insert it. Print the final array after insertion.*/
#include<stdio.h>
int main()
{
int i,N,A[50],E,p;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
printf("Enter the element you want to insert\n ");
    scanf("%d",&E);	
printf("Enter the position of element\n ");
    scanf("%d",&p);	
    A[p-1]=E;
    A[i]=A[p-1];
printf("The New Array is\n");
for(i=0;i<=N-1;i++)
{
	printf("%d ",A[i]);
}
return 0;
}
