#include<stdio.h>
int main()
{
	int a=1,sum=0;
	do{
		printf("%d\n",a);
		a++;
		printf("%d\n",sum);
		sum++;
	}
	printf("%d",sum);
	while(a<20);
}
