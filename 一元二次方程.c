#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,t,x1,x2,m,n;
    while(scanf("%f%f%f",&a,&b,&c)!=EOF)
    {
        if(a!=0)
        {
            t=b*b-4*a*c;
            if(t==0)
            {
                x1=x2=-b/(2*a);
                printf("x1=x2=%.2f\n",x1);
            }
            else if(t>0)
            {
                x1=(-b-sqrt(t))/(2*a);
                x2=(-b+sqrt(t))/(2*a);
                printf("x1=%.2f;x2=%.2f\n",x1,x2);
            }
            else
            {
                m=-b/(2*a);
                n=(sqrt(-t))/(2*a);
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",m,n,m,n);
            }
        }
        else
            printf("Not quadratic equation\n");
    }
    return 0;
}