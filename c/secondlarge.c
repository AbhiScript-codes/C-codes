#include<stdio.h>
#include<limits.h>
void slrage(int arr[]){
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max);
        max=arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]>smax  && arr[i]!=max) 
        smax=arr[i];
    }
    printf("the second largest element in this array is %d",smax);    
}
int main(){
    int arr[5]={1,2,3,4,5};
    slrage(arr);
    return 0;
}