#include<stdio.h>
#include<conio.h>
int main()
{
  int add,sub,mul,div,a,b;
  printf("enter the 1st num\n");
  scanf("%d",&a);
  printf("enter the 2nd num\n");
  scanf("%d",&b);
  add=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  printf("add=%d",add);
  printf("sub=%d",sub);
  printf("mul=%d",mul);
  printf("div=%d",div);
  return 0;
}
