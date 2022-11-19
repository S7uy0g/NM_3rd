/*Trapezoidal rule
Start

2. Define function f(x)

3. Read lower limit of integration, upper limit of 
   integration and number of sub interval

4. Calcultae: step size = (upper limit - lower limit)/number of sub interval

5. Set: integration value = f(lower limit) + f(upper limit)

6. Set: i = 1

7. If i > number of sub interval then goto 

8. Calculate: k = lower limit + i * h

9. Calculate: Integration value = Integration Value + 2* f(k)

10. Increment i by 1 i.e. i = i+1 and go to step 7

11. Calculate: Integration value = Integration value * step size/2 

12. Display Integration value as required answer

13. Stop 
*/
/*
simpsons 1/3
1. Start

2. Define function f(x)

3. Read lower limit of integration, upper limit of 
   integration and number of sub interval

4. Calcultae: step size = (upper limit - lower limit)/number of sub interval

5. Set: integration value = f(lower limit) + f(upper limit)

6. Set: i = 1

7. If i > number of sub interval then goto 

8. Calculate: k = lower limit + i * h

9. If i mod 2 =0 then 
     Integration value = Integration Value + 2* f(k)
   Otherwise
     Integration Value = Integration Value + 4 * f(k)
   End If

10. Increment i by 1 i.e. i = i+1 and go to step 7

11. Calculate: Integration value = Integration value * step size/3 

12. Display Integration value as required answer

13. Stop */
/*
3/8
1. Start

2. Define function f(x)

3. Read lower limit of integration, upper limit of 
   integration and number of sub interval

4. Calcultae: step size = (upper limit - lower limit)/number of sub interval

5. Set: integration value = f(lower limit) + f(upper limit)

6. Set: i = 1

7. If i > number of sub interval then goto 

8. Calculate: k = lower limit + i * h

9. If i mod 3 =0 then 
     Integration value = Integration Value + 2* f(k)
   Otherwise
     Integration Value = Integration Value + 3 * f(k)
   End If

10. Increment i by 1 i.e. i = i+1 and go to step 7

11. Calculate: Integration value = Integration value * step size*3/8 

12. Display Integration value as required answer

13. Stop */
//Trapezoidal rule
#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function here */
#define f(x) 1/(1+pow(x,2))

int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 printf("Enter number of sub intervals: ");
 scanf("%d", &subInterval);

 /* Calculation */
 /* Finding step size */
 stepSize = (upper - lower)/subInterval;

 /* Finding Integration Value(Trapezoidal)*/
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  integration = integration + 2 * f(k);
 }
 integration = integration * stepSize/2;
 printf("\nRequired value of integration(Trapezoida) is: %.3f", integration);
 /* Finding Integration Value(Simpsons 1/3)*/
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  if(i%2==0)
  {
   integration = integration + 2 * f(k);
  }
  else
  {
   integration = integration + 4 * f(k);
  }
 }
 integration = integration * stepSize/3;
 printf("\nRequired value of integration(Simpsons 1/3) is: %.3f", integration);
 /* Finding Integration Value(Simpson's 3/8) */
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  if(i%3 == 0)
  {
   integration = integration + 2 * f(k);
  }
  else
  {
   integration = integration + 3 * f(k);
  }
 }
 integration = integration * stepSize*3/8;
 printf("\nRequired value of integration(Simpson's 3/8') is: %.3f", integration);
 return 0;
}

