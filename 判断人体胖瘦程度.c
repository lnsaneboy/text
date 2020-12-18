#include <stdio.h>
int main()
{
    int w=0,h=0;
    float BMI=0;
    while(scanf("%d%d",&w,&h)!=EOF)
    {
        BMI=w/(h/100.f*h/100.f);
        if(BMI<18.5)
            printf("Underweight\n");
        else if(BMI>=18.5&&BMI<=23.9)
            printf("Normal\n");
        else if(BMI>=23.5&&BMI<=27.9)
            printf("Overweight\n");
        else if(BMI>27.9)
            printf("Obese\n");
    }
    return 0;
}