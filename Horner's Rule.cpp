#include<stdio.h>
int main()
{
	int n,i;
	float a[100],sum,x;
	printf("Enter degree of polynomial:");
	scanf("%d",&n);
	printf("Enter coeeficient of polynomial:");
	for(i=n;i>=0;i--)
	{
		printf("\nEnter Coefficient of [ X^%d ] :: ",i);
        scanf("%f",&a[i]);
	}
	printf("\nEnter the value of x:");
	scanf("%f",&x);
	for(i=n;i>=0;i--)
	{
		sum=(sum+a[i])*x;
	}
	sum=sum+a[0];
	printf("\nValue of the polynomial is = [ %f ]\n",sum);
    return 0;
}
