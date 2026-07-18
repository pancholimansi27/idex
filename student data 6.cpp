#include<stdio.h>

int main()
{
	int c,j,i,r,a,n,m;
	int b[i];
	printf("how many student you want in one class ");
	scanf("%d",&m);
	printf("enter the addmission of student number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the addmission of student %d id ",i);
		scanf("%d",&b[i]);
		
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(b[i]>b[j])
			{
				c=b[i];
				b[i]=b[j];
				b[j]=c;	
			}
		}
		printf("%d\n ",b[i]);
	}
	a=n/m;
	r=a%m;
	if(r>=0)
	{
		a++;
	}
		printf("need the student classroom:%d\n ",a);
int g[a][m];
for(i=0;i<a;i++)
{
	for(j=i+1;j<=m;j++)
	{	
			printf("%d",&g[i]);
	}	
	
}
