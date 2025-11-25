#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],r,c,r2,c2,i,j,k;
	printf("enter A matrix rows&columns");
	scanf("%d%d",&r,&c);
	printf("enter B matrix rows& columns");
	scanf("%d%d",&r2,&c2);
	if(c!=r2)
	{
		printf("matrix multiplication is not possible");
		exit(1)
	}
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter B matrix values");
	for(i=0;i<r2;i++);
	{
	for(j=0;j<c2;i++);
	{
	 scanf("%d",&B[i][j]);
	}	
	}
    }
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		for(k=0;k<r2;i++)
    		{
    			c[i][j]=c[i][j]+a[i][j]*b[k][j]
			}
		}
	}
	printf("result matrix is \n");
	for(i=0,i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",c[i][j])
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
