#include<stdio.h>
int main()
{
int rollnum,a,b,c,d,e,total,pr;
char name[50];
printf("enter the name");
scanf("%s",name);
printf("enter the roll number");
scanf("%d",&rollnum);
printf("enter marks of sub1");
scanf("%d",&a);
printf("enter marks of sub2");
scanf("%d",&b);
printf("enter marks of sub3");
scanf("%d",&c);
printf("enter marks of sub4");
scanf("%d",&d);
printf("enter marks of sub5");
scanf("%d",&e);
total=a+b+c+d+e;
pr=(total*100)/750;

printf("total marks:%d\n",total);
printf("per:%d",pr);
}
