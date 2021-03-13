#include<stdio.h>
void main()
{
	int i,j,m,n,a[50][50],sum=0;
    printf("enter the row and column:");
	scanf("%d%d",&m,&n);
	printf("enter the elements:");
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		printf("\n");
		for(j=1;j<=n;j++){
		 printf("%d\t",a[i][j]);	
}
}
    for(i=1;i<=m;i++){
    	for(j=1;j<=m;j++){
    		if(i==1 || (i+j)==n+1 || i==n )
    		{
    			sum=sum+a[i][j];
			}
		}
	}

	printf("%d",sum);
}
