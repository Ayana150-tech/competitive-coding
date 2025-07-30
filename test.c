#include <stdio.h>
int main(){
    int i,j, count0=0, count1=0;
    int mat[3][3]= {
        {0,0,0},
        {1,1,0},
        {0,1,1}
    };
    int n=3;
    printf("The original matrix is:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
    }
    if (count0>(n*n)/2){
        printf("It is a sparse matrix");
    }
    else{
        printf("It is a dense matrix");
    }
return 0;
}