#include <stdio.h>
int main()
{
    int i,j,n;
    while(~scanf("%d",&n)){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j)
                    printf("*");
                else if(j==n-i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}