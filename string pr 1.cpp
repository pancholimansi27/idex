#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="java";
	char b[10];
	printf("%d\n",strlen(a));
	strcpy(b,a);
	printf("%s\n",b);
	printf("%d\n",strcmp(a,b));
	strcat(a,b);
	printf("%s\n",strupr(a));
	printf("%s\n",strlwr(a));
	
	
}
