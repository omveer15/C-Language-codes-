/*Q32. Assume an array consists of following elements-
19 	45	67	78	89	56
Apply linear search algorithm to search the element 78 on this array.                   */
#include<stdio.h>
int main()
{
	int i,e;
	int A[6]={19,45,67,78,89,56};
	printf("Enter the element you want to search");
	scanf("%d",&e);
	for(i=0;i<=5;i++)
	{
		if(e==A[i])
		{
			printf("Element found at position =%d",i+1);
			break;
		}
	}
	if(i==5)
    printf("Elements Not Found");
	return 0;
}

