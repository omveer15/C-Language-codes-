/*10.	 If a=50, b=10 and c=20, evaluate the following complex expression:
   	              c+= (a>0 && a<=10) ? ++a: a/b;                         */
#include<stdio.h>
int main()
{
	int a=50,b=10,c=20;//a=50,b=10,c=20;
	c+= (a>0 && a<=10) ? ++a: a/b; 
	printf("%d",c);
	return 0;
} 
