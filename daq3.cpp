/*Q3.Write ana lgorithm,flowchart and C program to find age of any student of
your section where date,month,year of birthday are entered by the user.
Assuming Every year of 365 days,month of 30 days.*/
#include<stdio.h>
int main()
{
	int d1,m1,y1,d2,m2,y2,D1,D2,td,Df1,Df2,Df3,f,a,b,y,m;
	printf("Enter student Date,Month and Year of birth respectively");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("Enter Date,Month and Year of today respectively");
    scanf("%d%d%d",&d2,&m2,&y2);
    D1=y1*365;
    D2=m1*30;
    td=D1+D2+d1;
    
    Df1=y2*365;
    Df2=m2*30;
    Df3=Df1+Df2+d2;
    f=Df3-td;
    
    y=f/365;
    a=f%365;
    m=a/30;
	b=a%30; 
    printf("Age of student=%d years %d month %d days",y,m,b);
    return 0;   
}
