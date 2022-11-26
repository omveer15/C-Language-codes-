#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{       
    int t,i;
    char A[100];
    scanf("%d\n",&t);
    for(i=0;i<=t-1;i++)
        {
        scanf("%s\n",A[i]);
        }
    for(i=0;i<=t-1;i++)
        {
        printf("%s",A[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
