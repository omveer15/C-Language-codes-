/*30.	Write a program in 'C' to store (in an array) and print the roll numbers of students beginning from m to n.*/
#include<stdio.h>
int main()
{
	int N,A[50],i,X,Y;
	printf("Enter the size of array less than 50\n");
	scanf("%d",&N);
	printf("Enter the array elements \n");
	for(i=0;i<=N-1;i++)
	   scanf("%d",&A[i]);
	printf("Enter the range you want to print roll numbers\n");
	scanf("%d%d",&X,&Y);
	for(i=X-1;i<=Y-1;i++)
	   printf("Roll No.%d\t",A[i]);
	return 0;
}
