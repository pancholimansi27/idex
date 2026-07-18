#include<stdio.h>
int main()
{
	int i,j;
	for(i=i;i<=5;i++)
	{
		for(j=1;j<=(5-i);j++){
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%d ",1);
			}
			else
			{
				printf("p ");
			}
		}
		printf("\n");
		
	}
}
