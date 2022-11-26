#include<stdio.h>
int main()
{
	int x=10;
	if(x==10)
	{
	    printf("Hello");
		x=x<<1;
    }
    else
    {
    	printf("hi");
    	x=x>>1;
	}
	    printf("Hey");
		printf("%d",x);
	return 0;
}
