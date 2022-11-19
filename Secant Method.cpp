#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float a);
int main()
{
	 float x0,x1,x,error;
	 int itr,num=1;
	 printf("\nEnter numbers:\n");
	 printf("A:");
	 scanf("%f",&x0);
	 printf("\nB:");
	 scanf("%f",&x1);
	 printf("Enter Iteration:");
	 scanf("%d",&itr);
	 printf("Enter Error:");
	 scanf("%f",&error);
	 printf("\nIteration\t\tx");
	 do
	 {
		  if(f(x0)==f(x1))
		  {
			   printf("soln cannot be found!!!");
		  }
		  x=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
		  printf("\n%d\t\t\t%f",num,x);
		  x0=x1;
		  x1=x;
		  num++;
		  if(num==itr)
		  {
		  	break;
		  }
	 }while(fabs(f(x))>error); 
	 return 0;
}
float f(float a)
{
	float ans1;
	ans1=pow(a,3)-2*a-5;
	return ans1;
}
