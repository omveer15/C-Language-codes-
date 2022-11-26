//5.	Write a program to calculate binomial coefficient using function.
#include<stdio.h>
int BC(int n, int k)
{
        if(k==0 || k==n)
                return 1;
        return BC(n-1,k-1) + BC(n-1,k);
}
 
int main()
{
        int n,k;
        printf("Enter n and k : ");
        scanf("%d%d",&n,&k);
        printf("%dBinomial coefficient\n",BC(n,k));
        return 0;
}


