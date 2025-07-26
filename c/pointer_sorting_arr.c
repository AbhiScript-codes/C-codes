#include<stdio.h>
void sort(int *arr,int size){
    for(int i =0;i<size-1;i++){
        for(int j =0;j<=size-2-i;j++){
            if(*(arr+j)>*(arr+j+1)){
                int t=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=t;
            }
        }
    }
}
int main(){
    int arr[5]={-5,-4,-3,-2,-1};
    sort(arr,5);
    for(int i =0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}