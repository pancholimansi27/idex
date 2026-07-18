#include<stdio.h>
int main()
{
	int a,c,n1,n2;
	printf("enter the number1 ");
	scanf("%d",&n1);
	printf("enter the number2 ");
	scanf("%d",&n2);
	if(n1<=n2){
		while(n1<=n2){
			c=1;
			while(c<=10){
				printf("%d x %d = %d\n",n1,c,n1*c);
				c++;
			}
			n1++;
			printf("\n");
		}
		
	}
	else
	{
		while(n1>=n2){
			c=1;
			while(c<=10)
			{
				printf("%d x %d = %d\n",n1,c,n1*c);
				c++;	
			}
			n1--;
			printf("\n");
		}
	}
	
}
