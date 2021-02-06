#include<stdio.h>
#include<conio.h>
int main()
{
  float r,d,p,ar,pi=3.14;
  printf("enter the radius\n");
  scanf("%f",&r);
  d=2*r;
  printf("Diameter=%f",d);
  p=2*3.14*r;
  printf("Perimeter=%f",p);
  ar=3.14*r*r;
  printf("Area=%f",ar);
  return 0;
}
