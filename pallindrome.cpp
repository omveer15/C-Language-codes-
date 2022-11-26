#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,nn=0,r;
    scanf("%d",&n);
    const int m=n;
    while(n>0)
    {
        r=n%10;
        nn=nn*10+r;
        n=n/10;
    }
    if(nn=m)
        printf("Palindrome.");
    else 
        printf("Not Palindrome.");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
