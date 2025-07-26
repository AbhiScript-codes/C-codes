//wap to rotate matrix 90 
#include<stdio.h>
int main(){
int n;
printf("enter no of r and c");
scanf("%d",& n);
int arr[n][n];
printf("enter element");
for(int i =0;i<n;i++){
    for(int j=i;j<n;j++){
        scanf("%d",& arr[i][j]);
    }
}//transpose
for(int i =0;i<n;i++){
    for(int j=0;j<=n;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
}//rotate  90
for(int i =0;i<n;i++){
    int j = 0;
    int k = n-1;
    while(j<k){
        int temp=arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]=arr[i][j];
        j++;
        k--;
    }
}
for(int i =0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}