#include<stdio.h>
void dublicate(int arr[]){
    for(int i=0;i<9;i++){
        int yes =0;
        for(int j=i+1;j<9;j++){
            if(*(arr+i)==*(arr+j)){
               yes =1;
               break;
            }
           
        }   
        if(!yes)
        printf("%d ",*(arr+i));
    }
   
}
int main(){
    int arr[9]={1,2,3,4,5,6,8,8,9};
    dublicate(arr);
    return 0;
}