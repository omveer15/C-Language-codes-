#include<stdio.h>
int main()
{
int a = 2, b = 4, c = 8, x = 4;
if ( x == b) 
x = a;
else
 	x = b;
if( x != b)
 	c = c + b;
 else
 c = c + a;
printf("c = %d\n",c);
return 0;
}

