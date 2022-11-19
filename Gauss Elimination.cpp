/*Start
Declare the variables and read the order of the matrix n.
Take the coefficients of the linear equation as:
Do for k=1 to n
Do for j=1 to n+1
Read a[k][j]
End for j
End for k
Do for k=1 to n-1
Do for i=k+1 to n
Do for j=k+1 to n+1
a[i][j] = a[i][j] – a[i][k] /a[k][k] * a[k][j]
End for j
End for i
End for k
Compute x[n] = a[n][n+1]/a[n][n]
Do for k=n-1 to 1
sum = 0
Do for j=k+1 to n
sum = sum + a[k][j] * x[j]
End for j
x[k] = 1/a[k][k] * (a[k][n+1] – sum)
End for k
Display the result x[k]
Stop*/
//Gauss elimination
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define   SIZE   10
int main()
{
	float a[SIZE][SIZE], x[SIZE], ratio;
	int i,j,k,n;
	printf("Enter number of unknowns: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%f", &a[i][j]);
		}
	}
	for(i=1;i<=n-1;i++)
	{
		if(a[i][i] == 0.0)
		{
			printf("Mathematical Error!");
			exit(0);
		}
		for(j=i+1;j<=n;j++)
		{
			ratio = a[j][i]/a[i][i];
			for(k=1;k<=n+1;k++)
			{
			  	a[j][k] = a[j][k] - ratio*a[i][k];
			}
		}
	}
	x[n] = a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		x[i] = a[i][n+1];
		for(j=i+1;j<=n;j++)
		{
		  	x[i] = x[i] - a[i][j]*x[j];
		}
		x[i] = x[i]/a[i][i];
	} 
	printf("\nSolution:\n");
    for(i=1;i<=n;i++)
	{
	  	printf("x[%d] = %0.3f\n",i, x[i]);
	}
	return(0);
}
