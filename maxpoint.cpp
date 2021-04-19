#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,b,*p=&a,*q=&b;

   printf("\n\n Pointer : Find the maximum number between two numbers :\n");
   printf("------------------------------------------------------------\n");

   printf(" Input the first number : ");
   scanf("%d", p);
   printf(" Input the second  number : ");
   scanf("%d", q);


 if(*p>*q)
 {
  printf("\n\n %d is the maximum number.\n\n",*p);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*q);
 }

}
