#include<stdio.h>
int main()
{
	int counter=1;
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	star:
		printf("%d",counter);
		counter++;
		if(counter<=n)
			goto star;
			
getch();
return 0;

}
