#include<stdio.h>
int main()
{
	int s[3][5];
	int p[5];
	int i,j,c,total=0,pr;
	
	
	for(i=0;i<5;i++)
	{
		total=0;
		printf("Enter the number of student %d\n ",i+1);
		for(j=0;j<5;j++)
		{
			printf("Enter subject %d marks: ",j+1);
			scanf("%d",&s[i][j]);
			total=s[i][j]+total;
		}
			pr=total/5;
			p[i]=pr;
			printf("%d",p[i]);
			printf("total marks of the student %d\n ",total);
			printf("percentage of the student %d\n\n %",pr);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++){
			if(p[i]<p[j])
			{			
				c=p[i];
				p[i]=p[j];
				p[j]=c;
			}	
		}
	printf(" %d",p[i]);
	}
}
