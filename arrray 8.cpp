#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("input the size of array");
	scanf("%d",&n);
	printf("input element in the array");
	for(i=0;i<n;i++){
		printf("element %d",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]=a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	printf("element of array in sorted asondingoder\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n\n");
}
