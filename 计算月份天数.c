#include <stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
            b=31;
        else if(b==2)
        {
            b=28;
            if((a%4==0&&a%100!=0)||a%400==0)
                b=29;
        }
        else
            b=30;
        printf("%d\n",b);
    }
    return 0;
}