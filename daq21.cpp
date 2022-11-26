/*Q 21. Write a program to find the sum of your four last digit of your university roll number .*/
#include<stdio.h>
int main()
{
	int s,RN=2015001123,a,b,c,d;
	      a=RN%10;
	      RN=RN/10;
	      b=RN%10;
	      RN=RN/10;
	      c=RN%10;
	      RN=RN/10;
	      d=RN%10;
	      s=a+b+c+d;
	printf("the sum of last 4 digits of your university roll no. is = %d",s);
	return 0;
}
