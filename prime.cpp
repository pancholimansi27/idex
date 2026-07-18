#include<stdio.h>
int main()
{
	int n,b=2,c=0;
	printf("enter the number");
	scanf("%d",&n);
	while(b<=n){
		if(n%2==0){
			c++;
			break;
		}
		b++;
	}
	if(c==0){
		printf("number is prime");
	}
	else{
		printf("number is notprime");
	}
	
}
