#include<stdio.h>
int main(){
    int r,c;
    
    printf("enter no rows");
    scanf("%d",& r);
    printf("enter no columns");
    scanf("%d",& c);
    int arr[r][c];
    for(int i =0;i<r;i++){
       for(int j =0;j<c;j++){
        scanf("%d",& arr[i][j]);
       }
    }
    int maxsum = -1;
    int maxrow;
    for(int i =0;i<r;i++){
        int sum =0;
       for(int j =0;j<c;j++){
        sum=sum+arr[i][j];
       }
       if(sum>maxsum){
       maxsum=sum;
       maxrow=i;
       }
    }
    printf("max row id id %d",maxrow);
    return 0;
} 