/*Q8.Write a program to read an integer, a character and a float value from keyboard and display
the same in different lines on the screen.*/
#include<stdio.h>
int main()
{
  int I;
  char C;
  float F;
  printf(" Please Enter a Character :  ");
  scanf("%c", &C);
  printf(" Please Enter an Integer Value :  ");
  scanf("%d", &I);
  printf(" Please Enter Float Value :  ");
  scanf("%f", &F);    
  printf(" \n The Integer Value that you Entered is :  %d", I);
  printf(" \n The Character that you Entered is :  %c", C);
  printf(" \n The Float Value that you Entered is :  %f", F);
  return 0;
}
