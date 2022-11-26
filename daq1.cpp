/*Q1.Writeanalgorithm andCprogram forcalculatingthepriceofaproduct
afteraddingthesalestaxtoitsoriginalprice.Whererateoftaxandpriceis
inputtedbyuser.*/
#include<stdio.h>
int main()
{
	float o,r,t,f;
	printf("Enter the original price of product and rate tax respectively  ");
	scanf("%f%f",&o,&r);
    t=(o*r)/100;
    f=o+t;
    printf("Final price of product = %f",f);
    return 0;
}
