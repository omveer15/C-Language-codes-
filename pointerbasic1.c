#include<stdio.h>
int main()
{
	int A[3]={7,2,9};
	int *p;
	p=A;
	printf("%u\n",p);            	//60
	printf("%u\n",A);              	//60
	printf("%d\n",*A);              //7
	printf("%d\n",*p);	            //7
	printf("%d\n",A[0]);	        //7 
	printf("%d\n",*(1+A));	        //2  
	printf("%u\n",sizeof(A));	    //12
	printf("%u\n",sizeof(p));	    //4
	printf("%u\n",1[p]);	        //2
	printf("%u\n",*(p+1));			//2
	return 0;
}
