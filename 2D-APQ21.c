/*21.	Let A be a square matrix of size n x n. Consider the following program. What is the expected output? */
#include<stdio.h>
int main()
{

    int C = 100;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          {
           Temp = A[i][j] + C;
           A[i][j] = A[j][i];
           A[j][i] = Temp - C;
          } 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           printf("%d ",A[i][j]);
return 0;
}
