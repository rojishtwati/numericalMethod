#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n;
	float A[5][5],c,x[5];
	printf("enter the order of the matrix:");
	scanf("%d",&n);
	printf("enter the element of augumented matrix row wise\n");
	for(i=1;i<=n;i++)
	{ for(j=1;j<=n+1;j++)
	{
		printf("A[%d][%d]",i,j);
		scanf("%f",&A[i][j]);
	}
	}
	for(k=1;k<=n-1;k++)
	{
		for(i=k+1;i<=n;i++)
		{
			c=A[i][k]/A[k][k];
			for(j=1;j<=n+1;j++)
			{
				A[i][j]=A[i][j]-c*A[k][j];
			}
		}
	}
	x[n]=A[n][n+1]/A[n][n];
	for(i=n-1;i>=1;i--)
	{
	x[i]=A[i][n+1];
	for(j=i+1;j<=n;j++)
	{x[i]=x[i]-A[i][j]*x[j];
	}
	x[i]=x[i]/A[i][i];
    }
    printf("\n The solution:\n");
    for(i=1;i<=n;i++)
    {printf("\nx%d=%f\t",i,x[i]);
	}
}