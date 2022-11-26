/*14.	WAP to input an array of N number of elements (Elements can repeat) . Input an element you want to search 
and find it. If found then print all the positions of that element otherwise print not found.*/
#include<stdio.h>
int main()
{
	int A[50],N,E,i,f=0;
	printf("Enter the size of array less than 50 \n");
    scanf("%d",&N);
    printf("Enter the distinct array elements\n");
    for(i=0;i<=N-1;i++)
	scanf("%d",&A[i]);
	printf("Enter the elements to search\n");
    scanf("%d",&E);
    for(i=0;i<=N-1;i++)
    {
    	if(E==A[i])
    	{
    		printf("Elements fount at position =%d\n",i+1);
    		f=1;
		}
		if(f==0)
		printf("Elements Not Found");
	 } 
	return 0;
}
