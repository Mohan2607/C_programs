#include<stdio.h>
void main()
{
	int i,j,m,n,temp,a[100];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number of rotation:");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<=n/2;j++){
			temp=a[j];
			a[j]=a[n-1];
			a[n-1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
