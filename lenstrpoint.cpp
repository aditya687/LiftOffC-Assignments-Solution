
#include<stdio.h>
#include<conio.h>
int main()
{
char a[10],*p;
int i=0;
printf("Enter any string\n");
gets(a);
p=a;
while(*p!='\0')
{
i++;
p++;
}
printf("Length of given string is: %d",i);
getch();
}
