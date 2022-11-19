/*1. Start


2. Arrange given system of linear equations in 
   diagonally dominant form


3. Read tolerable error (e)


4. Convert the first equation in terms of first variable, 
second equation in terms of second variable and so on. 


5. Set initial guesses for x0,  y0, z0 and so on


6. Substitute value of y0, z0 ... from step 5 in 
   first equation obtained from step 4 to calculate 
   new value of x1. Use x1, z0, u0 .... in second equation 
   obtained from step 4 to caluclate new value of y1. 
   Similarly, use x1, y1, u0... to find new z1 and so on.  


7. If| x0 - x1| > e and | y0 - y1| > e and | z0 - z1|  > e 
   and so on then goto step 9


8. Set x0=x1, y0=y1, z0=z1 and so on and goto step 6


9. Print value of x1, y1, z1 and so on


10. Stop*/
//Gauss seidal
#include<stdio.h>
 
int main()
{
    float a[10][10], b[10], x[10], y[10];
    int n = 0, m = 0, i = 0, j = 0;
    printf("Enter size of 2d array(Square matrix) : ");
    scanf("%d",&n);
 
    //Input values of left side of equations
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           printf("Enter values no :( %d , %d ) ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
 
    //Input right side of equations
    printf("\nEnter Values to the right side of equation\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter values no :( %d , %d ) ",i,j);
        scanf("%f",&b[i]);
    }
 
    //Input initial values of x
    printf("Enter initial values of x\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter values no. :( %d ):",i);
        scanf("%f",&x[i]);
    }
 
    //Input number of iterations
    printf("\nEnter the no. of iteration : ");
    scanf("%d",&m);
 
    //Iterating a loop for no of iterations
    while (m > 0)
    {
        for (i = 0; i < n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j = 0; j < n; j++)
            {
                if (j == i)
                {
                	continue;
				}
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            printf("x%d = %f    ", i + 1, y[i]);
        }
        printf("\n");
        m--;
    }
    return 0;
}
