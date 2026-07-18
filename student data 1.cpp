#include<stdio.h>
int main()
{
	int j,i,n,a;
	int total=0,m,pr;
	printf("enter the number of student: ");
	scanf("%d",&n);
	printf("enter the subject: ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		printf("enter the marks of student %d \n",i);
		for(j=1;j<=m;j++)
		{
			printf("enter the marks of sub %d:",j);
			scanf("%d",&a);	
			total=total+a;	
		}
		pr=total/m;
	printf("total marks of student %d is %d\n",i,total);
	printf("percentage of student %d is %d\n",i,pr);
	printf("\n");
	}
}
