#include<stdio.h>
#include<conio.h>
#include<math.h>
float function1(float a);
float function2(float b);
int main()
{
	 float x;
	 int i=0,itr;
	 printf("Enter number:");
	 scanf("%f",&x);
	 printf("Enter iteration:");
	 scanf("%d",&itr);
	 while(i<=itr)
	 {
		x=x-function1(x)/function2(x);
		printf("Iteration %d=%f",i+1,x);
		printf("\n");
		i++;
	 }
	 
	 printf("Approximate Root:%f",x);
	 return 0;
}
float function1(float a)
{
	float ans1;
	ans1=a*a+4*a-9;
	return ans1;
}
float function2(float b)
{
	float ans2;
	ans2=2*b+4;
	return ans2;
}
