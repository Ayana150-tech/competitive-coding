#include <stdio.h>
int main(){
	int n=3;
	int m=3;
	int mat[3][3]={
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&mat[i][j]);
		}
		printf("/n ");
	}


 int count0=0;
 int count1=0;
 for(int i=0;i<3;i++){
 	for(int j=0;j<3;j++){
 		if(mat[i][j]==0){
 			count0++;
		 }
		 else{
		 	count1++;
		 }
	}
}
		 if(count0>(n*m)/2){
		 	printf("sparce");
		 }else{
		 	printf("dence");
		 }
	 
 return 0;
}
