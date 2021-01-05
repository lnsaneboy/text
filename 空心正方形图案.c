#include <stdio.h>
int main()
{
    int i,j,n;
    while(~scanf("%d",&n)){
        for(i=0;i<n;i++){
            if(i==0||i==n-1){
                for(j=0;j<n;j++){
                    printf("* ");
                }
            }else{
                printf("*");
                for(j=0;j<2*n-3;j++)
                    printf(" ");
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}