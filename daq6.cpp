/*Q.6 Mr. X goes to market for buying some fruits and vegetables. He is having a currency of Rs 500 
with him for marketing. From a shop, he purchases 2.0 kg Apple priced Rs. 50.0 per kg, 1.5 kg Mango 
priced Rs.35.0 per kg, 2.5 kg Potato priced Rs.10.0 per kg, and 1.0 kg Tomato priced Rs.15 per kg.
 He gives the currency of Rs. 500 to the shopkeeper. Find out the amount shopkeeper will return
to X by writing alogirthm , flowchart and a C program.*/
#include<stdio.h>
int main()
{
//	int TA=500,ap=50,mp=35,pp=10,tp=15,aq=2,mq=1.5,pq=2.5,tq=1;
	float a,na,TA=500,ap=50,mp=35,pp=10,tp=15,aq=2,mq=1.5,pq=2.5,tq=1;
	a=(ap*aq)+(mp*mq)+(pp*pq)+(tp*tq);
	na=TA-a;
	printf("the shopkeeper will return %.1f rupees",na);
	return 0;
}
