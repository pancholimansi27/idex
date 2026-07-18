#include<stdio.h>
int main()
{
	int a[100],n,i,even=0,odd=0;
	printf("Enter the array size");
	scanf("%d",&n);
	printf("enter element \n",n);
	for(i=0;i<n;i++){
		printf("element %d",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("Even number in array: %d",even);
	printf("\n odd number in array: %d",odd);
	return 0;
}
