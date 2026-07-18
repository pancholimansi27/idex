//no argument with return
#include<stdio.h>
float cir()
{
	int r;
	printf("enter the radious");
	scanf("%d",&r);
	float p=3.14;
	return(p*r*r);	
	
}
int main()
{
	printf("circle area of: %f",cir());
}

