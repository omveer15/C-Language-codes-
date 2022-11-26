/*7.	Suppose there is president election in US and there are 2 candidates Trump and Biden. Input the votes of 
both the candidates in 10 states of US and calculate state-wise winner and overall winner.*/
#include<stdio.h>
int main()
{
	int T[10],B[10],i,st=0,sb=0;
	printf("Enter the votes of Trump in 10 states\n");
	for(i=0;i<=9;i++)
	  {
		scanf("%d",&T[i]);
	  }
	printf("Enter the votes of Biden in 10 states\n");
	for(i=0;i<=9;i++)
	  {
		scanf("%d",&B[i]);
	  }
	  for(i=0;i<=9;i++)
	  {
	      if(T[i]>B[i])  
	        {     
			printf("Trump is winner in %d state\n",i+1);
		    st++;
	        }
          else if(T[i]<B[i])
	        {
	     	printf("Biden is winner in %d state\n",i+1);
	    	sb++;
            }
          else
          printf("Both have equal votes in %d state\n",i+1);
      }
      if(st>sb)
      printf("Trump is overall winner");
      else if(sb>st)
      printf("Biden is overall winner");
      else
      printf("Election Tied");
return 0;
}
