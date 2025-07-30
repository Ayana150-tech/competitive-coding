#include <stdio.h>
int main(){
    int a[3][5],i,j,c=0;
    printf("Enter elements for matrix of size 3*5:\n\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=4;j++){
            scanf("%d",& a[i][j]);

        }
    }
    printf("\n Matrix of size 3*5:\n\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=4;j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=4;j++){
            if(a[i][j]==0){
                c++;
            }
        }
    }
    printf("Zeros present in above matrix:%d", c);
    return 0;
}