#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=10;i+=2)
	{
		
			for(j=0;j<=i;j++)
			{
				if(j%2==0){
				printf("%d",j);
			}
			}
		printf("\n");
	}
	
}
