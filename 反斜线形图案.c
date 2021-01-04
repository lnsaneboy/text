#include<stdio.h>
int main()
{
    int n,i,j;
    int a[20][20];
    while(scanf("%d\n",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                if(i==j)
                    printf("*");
                else
                    printf(" ");
            printf("\n");
        }
    }
    return 0;
}