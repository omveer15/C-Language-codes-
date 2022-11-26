/*There are M men and N women working in an IT organization. A new project was assigned to this 
organization, which required all men and women to be divided into groups. You have to find whether 
it is possible to divide these men and women in such a way that each group has exactly same number 
of men and women. If possible, print Number of Men, M in group and number of women, N in group such 
that there are maximum possible project groups. Otherwise, print Not Possible

Input Format

First line contains, T, number of testcases. For each testcase, single line contains two space separated integers, M and N.

Constraints

0 <= |M,N| <= 10000000000

Output Format

For each testcase, if possible, print space separated M and N, Otherwise print Not Possible.

Sample Input 0

5
492600 927045
876443 896078
68867 589636
108461 543148
213642 353898

Sample Output 0

32840 61803
Not Possible
Not Possible
Not Possible
11869 19661*/


#include <stdio.h>
int gcd(int a, int b)
{
    if(b==0)
	{
        return a;
    }
    return gcd(b,a%b);
}
int main()
 {
    int n,a,b,x,y,i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
	{
        scanf("%d %d",&a,&b);
        int g=gcd(a,b);
        x=a/g;
        y=b/g;
        if(g==1)
		{
            printf("Not Possible\n");
        }
        else
		{
            printf("%d %d\n",x,y);
        }
    }
    return 0;
}
