/*11.	WAP to input an array of N number of elements and swap the largest and smallest element in that array
 and print the updated array.*/
#include<stdio.h>
int main()
{
int i,N,A[50],large,small,lp=0,sp=0,t;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
large=A[0];
for(i=1;i<=N-1;i++)
   {
      if(large<A[i])
    	{
		large=A[i];
    	lp=i;
        }
   }
small=A[0];
for(i=1;i<=N-1;i++)
   {
      if(small>A[i])
    	{
		small=A[i];
    	sp=i;
        }
   }
   t=A[lp];
   A[lp]=A[sp];
   A[sp]=t;
printf("Largest =%d\n",large);	
printf("smallest =%d\n",small);	
printf("After Interchanging \n");
for(i=0;i<=N-1;i++)
printf("%d ",A[i]);
return 0;
}
