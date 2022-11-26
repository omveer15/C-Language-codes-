/*6.	Electricity Bill Statement (EBS) takes units consumed from consumer and calculates electricity 
charges (EC) using provided criteria:
1 - 100 units @ Rs. 2.00/- (per unit)
101 - 200 units @ Rs. 3.50/- (per unit)
201 and more units @ Rs. 4.50/- (per unit)
General sale tax which is the 10% of the EC.  Amount due (EC + Gen. Sale tax) .                  */
#include<stdio.h>
float B(float u)
{    
    float c;
    if(u<=100)
    {
       	c=u*2;
    }
    else if(u>=101  && u<=200)
    {
    	c=100*2+(u-100)*3.5;
	}
    else if(u>=201)
    {
    	c=100*2+100*3.5+(u-200)*4.5;
	}
	printf("Bill with tax=%f\n",c*10/100+c);
	return c;
}
 
void main()
{
        float u;
        printf("Enter units : ");
        scanf("%f",&u);
        printf("Total bill =%f\n",B(u));
}

