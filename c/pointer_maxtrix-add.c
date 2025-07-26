#include<stdio.h>
void matrixadd(int *a,int *b){
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=*(a+i*3+j)+*(b+i*3+j);
        }    
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }  
        printf("\n");  
    }
}
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    matrixadd(&a[0][0],&b[0][0]);
    return 0;
}