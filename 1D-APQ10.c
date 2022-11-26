/*10.	WAP to input an array of N number of elements and find the smallest element in that array.*/
#include<stdio.h>
int main()
{
int i,N,A[N],large,small;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
/*
large=A[0];
for(i=1;i<=N-1;i++)
   {
      if(large<A[i])
    	large=A[i];
   }
   */
small=A[0];
for(i=1;i<=N-1;i++)
   {
      if(small>A[i])
    	small=A[i];
   }
//printf("Largest =%d\n",large);	
printf("smallest =%d\n",small);	
return 0;
}



/*
#include<stdio.h>
int main()
{
int i,N,A[N],j,t;
printf("Enter the size of array less than 50 \n");
scanf("%d",&N);
printf("Enter the array elements\n");
for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
for(i=0;i<=N-1;i++)
   {
	for(j=0;j<=N-i-1;j++)
	{
		if(A[j]>A[j+1])
		{
			t=A[j];
			A[j]=A[j+1];
			A[j+1]=t;
		}
	}
   }
      
    printf("smallest Value is %d",A[0]);
return 0;
}
*/
