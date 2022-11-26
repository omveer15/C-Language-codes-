/*8.	WAP to read the marks of 500 students of a course in computer programming and print the frequency of 
each score above 60. Do it using most efficient method you could taking minimum memory and minimum time.*/
#include<stdio.h>
int main()
{
	int A[500],i,s=0;
	printf("Enter the marks of 500 students of computer programming\n");
	for(i=0;i<=499;i++)
	  {
		scanf("%d",&A[i]);
		if(A[i]>60)
		 s=s+1;
	  }
	  printf("The no. of marks greater then 60 are =%d",s);
	return 0;
}
