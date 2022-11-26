/*Q17. The SPI (Semester Performance Index) is a weighted average of the grade points earned by a 
student in all the courses he registered for in a semester. If the grade points associated with the 
letter grades awarded to a student are g1, g2, g3,…….gk etc. and the corresponding credits are c1, 
c2, c3,.…..ck, the SPI is  given by:
SPI=(?_(i=1)^k??c_i g_i ?)/(?_(i=1)^k?c_i )
Where, k is the number of courses for which the candidate remains registered for during the 
semester/ trimester. Write a program in C to calculate SPI for k =5.*/
#include <stdio.h>
int main()
{
	float c1,c2,c3,c4,c5,g1,g2,g3,g4,g5,SPI;
	printf("Enter the grade and credits of first subject respectively");
	scanf("%f%f",&g1,&c1);
	printf("Enter the grade and credits of second subject respectively");
	scanf("%f%f",&g2,&c2);
	printf("Enter the grade and credits of third subject respectively");
	scanf("%f%f",&g3,&c3);
	printf("Enter the grade and credits of fourth subject respectively");
	scanf("%f%f",&g4,&c4);
	printf("Enter the grade and credits of fifth subject respectively");
	scanf("%f%f",&g5,&c5);
	SPI=(c1*g1+c2*g2+c3*g3+c4*g4+c5*g5)/(c1+c2+c3+c4+c5);
	printf("SPI = %f",SPI);
	return 0;
}

