#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,m,i,j;
	i=j=0;
	
	scanf("%d %d",&m,&n);
	float arr[n][m+1],y[n],xt[m+1][n];
	
	for(i=0;i<n;i++)
	{
		arr[i][j] = 1;
		scanf("%f %f %f",&arr[i][j+1],&arr[i][j+2],&y[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m+1;j++)
		{
			printf("%.2f\t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m+1;i++)
	{
		for(j=0;j<n;j++)
		{
			xt[i][j] = arr[i][j]*arr[j][i];
		}
	}
	
	return 0;
}
