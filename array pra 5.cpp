#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter the row");
	scanf("%d",&r);
	printf("enter the coloumn");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++){
			printf("enter valuve of a");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
}
