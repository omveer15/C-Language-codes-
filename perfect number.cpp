#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,s=0,i=1;
    scanf("%d",&n);
    while(n<i)
    {
       if(n%i==0)
       { 
           s=s+i;
       }   
        i=i+1;
    }
    if(s=n) printf("Perfect.");
    else 
        printf("Not Perfect.");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
