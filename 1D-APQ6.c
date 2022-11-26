//6.	WAP to input an array of N number of elements and find their standard deviation.
#include<stdio.h>
#include<math.h>
int main()
{
int i,N,A[100],s=0;
float avg,s1=0,v,SD;
printf("Enter the size of array \n");
scanf("%d",&N);
	printf("Enter the array elements\n");
	for(i=0;i<=N-1;i++)
	  {
		scanf("%d",&A[i]);
		s=s+A[i];
	  }
	  avg=(float)s/N;
	  for(i=0;i<=N-1;i++)
	  {
	  	s1=s1+pow(A[i]-avg,2);
	  }
	  v=(float)s1/N;
	  SD=sqrt(v);
	  printf("Standard Deviation = %f",SD);
return 0;
}
