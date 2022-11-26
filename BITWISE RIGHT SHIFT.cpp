//formula :     short cut                              NN=ON/2^BITS
//Where         NN=new number                          i.e:b
//              ON=OLD NUMBER                          i.e:a or 5
//              BITS=value after left shit                i.e:1
//NOTE:                            DOES NOT WORK FOR FLOAT VALUE
//                                 SIGN IS IMPORTANT AND REMAINS SAME
#include<stdio.h>
int main()
{
	char a=5,b;
	b=a>>1;	
	printf("%d",b);
	return 0;
}
