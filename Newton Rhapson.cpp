#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n,i,j;
    float c;
    printf("Enter number of rows in the table: ");
    scanf("%d",&n);
    float x[n],y[n];
    printf("Enter the values of x and y in the table:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("Enter value of x at which u want to find y: ");
    scanf("%f",&c);
    float h=x[1]-x[0];
    float p=(c-x[n-1])/h;
    int t=n-1;
    float k[t];
    for(j=0;j<t;j++)
    {
        k[j]=y[j+1]-y[j];
        printf("%f ",k[j]);
    }
    printf("\n");
    float s[n-1];
    s[0]=k[t-1];
    for(i=1;i<n-1;i++)
    {
        t=n-1-i;
        float r[t];
        for(j=0;j<t;j++)
        {
            r[j]=k[j+1]-k[j];
            printf("%f ",r[j]);
        }
        s[i]=r[t-1];
        printf("\n");
        for(j=0;j<t;j++)
        {
            k[j]=r[j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        printf("%f \n",s[i]);
    }
    float p_value[n-1];
    p_value[0]=p;
    for(i=1;i<n-1;i++)
    {
        p_value[i]=p_value[i-1]*(p+i);
    }
    float ans=y[n-1];
    for(i=0;i<n-1;i++)
    {
        ans+=(p_value[i]*s[i])/fact(i+1);
   }
   printf("When x=%f y=%f",c,ans);
    return 0;
}
