#include<stdio.h>
#include<conio.h>
int main()
{
 float phy,chem,math,bio,com,percent,grade,total,avg;
 printf("enter the marks in phy\n");
 scanf("%f",&phy);
 printf("enter the marks in chem\n");
 scanf("%f",&chem);
 printf("enter the marks in math\n");
 scanf("%f",&math);
 printf("enter the marks in bio\n");
 scanf("%f",&bio);
 printf("enter the marks in com\n");
 scanf("%f",&com);
 total=math+chem+com+bio+phy;
 avg=total/5;
 percent=(avg/500)*100;
  if(percent>=90){
     printf("grade=A");
  }
  if(percent>=80){
     printf("grade=B");
  }
  if(percent>=70){
     printf("grade=C");
  }
  if(percent>=60){
     printf("grade=D");
  }
  if(percent>=40){
     printf("grade=E");
  }
  else
  {
    printf("grade=F");
  }
  return 0;
}
