/*19.	WAP to input an array of N number of elements. Input the position of element you want to delete. Print 
the element deleted and updated array after deletion of that element.*/
#include<stdio.h>
int main()
{
int i,N,A[50],p;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
printf("Enter the position of element you want to delete\n ");
    scanf("%d",&p);	
    if(p>=N+1)
    printf("Delete not possible");
    else
    {
     printf("The deleted Array element is %d\n",A[p-1]);
     for(i=p-1;i<=N-1;i++)
	     A[i]=A[i+1];
    }
	printf("The New Array is\n");
    for(i=0;i<N-1;i++)
      	printf("%d ",A[i]);
return 0;
}
