/*9.Write a C Program to find weather an entered year is leap or not.*/
#include<stdio.h>
int main()
{
	int y;
	printf("Enter the year");
	scanf("%d",&y);
	if(y%4==0)
    	printf("Leap Year");
	else 
	    printf("Not Leap Year");
	return 0;
}

