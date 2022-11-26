/*  29.	Consider a scenario where there are two classes A and B having 30 students each.  A test was conducted 
for both the classes in a single room and student having same class roll number but from different classes was 
made to sit together and as a result they copied from each other and scored equal marks. Wap in 'C' to compute 
the marks of class B students based on the marks of class A students (using Arrays).                        */
#include<stdio.h>
int main()
{
	int A[30],B[30],i,X,Y;
	printf("Enter the marks of 30 students of class A \n");
	for(i=0;i<=29;i++)
	   scanf("%d",&A[i]);
	for(i=0;i<=29;i++) 
       B[i]=A[i];
    for(i=0;i<=29;i++) 
	   printf("Roll No.%d= %d\t",i+1,A[i]);
	return 0;
}

