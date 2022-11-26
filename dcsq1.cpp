/*1.Write a C program to accept a coordinate point in a XY coordinate system and determine in 
which quadrant the coordinate point lies.*/
#include<stdio.h>
int main()
{  
    int x,y;
    printf("Enter the coordinate ");
    scanf("%d  %d",&x,&y);
    if(x>0 && y>0)
         printf("First quadrant");
    else if(x<0 && y>0)
         printf("Second quadrant");    
    else if(x<0 && y<0)
         printf("Third quadrant");  
	else if(x>0 && y<0)
         printf("Fourth quadrant");  
	else if(x==0 && y==0)
         printf("Origin");  
    else if(x>0 && y==0)
         printf("on x-axis");  
	else if(x==0 && y>0)
         printf("on y-axis");  
	else if(x<0 && y==0)
         printf("on negative x-axis");  
	else printf("on negative y-axis");       
return 0;
}
