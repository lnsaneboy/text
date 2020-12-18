#include <stdio.h>
int main()
{
    double a,c;
    char b;
    while(scanf("%lf%c%lf",&a,&b,&c)!=EOF)
    {
        switch(b)
        {
            case '+':printf("%.4lf+%.4lf=%.4lf\n",a,c,a+c);break;
            case '-':printf("%.4lf-%.4lf=%.4lf\n",a,c,a-c);break;
            case '*':printf("%.4lf*%.4lf=%.4lf\n",a,c,a*c);break;
            case '/':
                if(c!=0)
                {
                    printf("%.4lf/%.4lf=%.4lf\n",a,c,a/c);break;
                }
                else
                {
                    printf("Wrong!Division by zero!\n");break;
                }
                default:printf("Invalid operation!\n");break;
        }
    }
    return 0;
}