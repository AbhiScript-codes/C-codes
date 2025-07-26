#include<stdio.h>
int main(){
    int arr[3][3]={14,26,39,78,34,43,65,56,04};
    int brr[3][3]={19,245,630,94,98,04,35,97,94};
    //int crr[2][2];
    for (int i =0;i<3;i++){
        for (int j =0;j<3;j++){
            
            arr[i][j]=brr[i][j]+arr[i][j];

            
    }
    }
      for (int i =0;i<3;i++){
        for (int j =0;j<3;j++){
           printf("%d ",arr[i][j]);
        }
          printf("\n");
      }
      return 0;
}