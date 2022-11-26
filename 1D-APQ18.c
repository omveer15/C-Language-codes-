/*18.	WAP to input an array of N number of elements. Input E no. of elements you want to insert in that array 
along with their positions and insert all of them. Print the final array after insertion of all elements.*/
#include<stdio.h>
int main()
{
int i,N,A[50],E,n,p;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
printf("How many elements you want to insert\n ");
scanf("%d",&n);
printf("Enter the element followed with their position, you want to insert\n ");
for(i=1;i<=n;i++)
{
	scanf("%d%d",&E,&p);	
}
    A[p-1]=E;
    A[i]=A[p-1];
   for(i=0;i<=N-1;i++)
      printf("%d\t",A[i]);
return 0;
}
