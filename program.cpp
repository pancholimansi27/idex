#include<stdio.h>		
//p*r*n/100
float simple(int p,int r,int n)
{
	return()(p*r*n)/100);
	
}
int main()
{
	int a,b,n;
	printf("enter money = ");
	scanf("%f",&a);
	printf("enter interst = ");
	scanf("%f",&b);
	printf("enter the year");
	scanf("%f",&n);
	printf("%f",simple(a,b,n));
}



