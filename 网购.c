#include <stdio.h>
int main()
{
    float price;
    int month,day,coupons;
    scanf("%f%d%d%d",&price,&month,&day,&coupons);
    if(month==11&&day==11)
    {
        if(price*0.7>50)
            printf("%.2f",coupons==1?price*0.7-50:price*0.7);
        else
            printf("0.00");
    }
    else if(month==12&&day==12)
    {
        if(price*0.8>50)
            printf("%.2f",coupons==1?price*0.8-50:price*0.8);
        else
            printf("0.00");
    }
    else
        printf("%.2f",price);
    return 0;
}