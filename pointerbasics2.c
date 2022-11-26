//pointer to pointer
#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	int **q=&p;
	int ***r=&q;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%d\n",p);
	printf("%u\n",&p);
	printf("%d\n",q);				
	return 0;
}
