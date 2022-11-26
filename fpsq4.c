/*4.	Write a program to find factorial of a number using function of no return type no argument, 
no return type with argument, return type with no argument and return type with argument.            */

/*
//using function of no return type no argument  
#include<stdio.h>
void fact()
{  
    int i,f=1,n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
	    f=f*i;
      }
    printf("%d",f);
}
void main()
{
	fact();
}
*/
/*
//using no return type with argument
#include<stdio.h>
void fact(int n)
{  
    int i,f=1;
    for(i=1;i<=n;i++)
      {
	    f=f*i;
      }
    printf("%d",f);
}
void main()
{
	int n;
	printf("Enter the Number\n");
    scanf("%d",&n);
	fact(n);
}

*/
/*
//using return type with no argument
#include<stdio.h>
int fact()
{  
    int i,f=1,n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
	    f=f*i;
      }
    return f;
}
void main()
{
	printf("%d",fact());
}

*/

//using return type with argument
#include<stdio.h>
int fact(n)
{  
    int i,f=1;
    for(i=1;i<=n;i++)
      {
	    f=f*i;
      }
    return f;
}
void main()
{   
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
	printf("%d",fact(n));
}
