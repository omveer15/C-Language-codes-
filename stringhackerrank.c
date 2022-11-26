#include <stdio.h>
#include <string.h>

int main()
{       
    int t,i;
    char A[10];
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
