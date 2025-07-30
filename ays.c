#include <stdio.h>
int main(){
    int i=0, j=0, row=0, col=0;
    int flag=0;
    int a[3][3];

    //printf("Enter the order of the matrix (m*n):\n");
    printf("Where m=number of rows:\n");
    printf("Where n=number of columns:\n");
    scanf("%d%d",&row ,&col);

    printf("Enter the elements of the matrix: \n");
    for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                scanf("%d", &a[i][j]);
            }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==j && a[i][j]!=1){
                flag=-1;
                break;
            }
            else if(i!=j && a[i][j]!=0){
                flag=-1;
                break;
            }
        }
    }
    if(flag==0){
        printf("It is an identity matrix");
    }
    else{
        printf("It is not an identity matrix");
    }
return 0;    
    

}