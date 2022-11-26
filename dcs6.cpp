/*6.Suppose you start writing a C program at time T1 (hh:mm:ss). At time T2 (hh:mm:ss) coding 
is finished. After compiling code, you get an error, and it took you T3 (hh:mm:ss) time to fix 
the error. Write a program to find the total time (hh:mm:ss) that you spent in executing this 
program.*/
#include<stdio.h>
int main()
{
   int h1,m1,s1,h2,m2,s2,h3,m3,s3,t1,t2,t3,tt,h,m,s;
   printf("Enter the time you start coding (hh:mm:ss)\n");
   scanf("%d %d %d",&h1,&m1,&s1);
   printf("Enter the time you end coding (hh:mm:ss)\n");
   scanf("%d %d %d",&h2,&m2,&s2);
   printf("Enter the time to fix error (hh:mm:ss)\n");
   scanf("%d %d %d",&h3,&m3,&s3);
   t1=h1*3600+m1*60+s1;
   t2=h2*3600+m2*60+s2;
   t3=h3*3600+m3*60+s3;
   tt=t2-t1+t3;
   h=tt/3600;
   tt=tt%3600;
   m=tt/60;
   s=tt%60;
   printf("total time= %d H %d M %d S",h,m,s);
   return 0;
}
