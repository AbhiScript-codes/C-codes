#include<stdio.h>
void frequency(int arr[]){
    for(int i=0;i<9;i++){
        int count =1;
        for(int j=i+1;j<9;j++){
            if(*(arr+i)==*(arr+j)){
               count++;
               continue;
               
            }
           
        }   
        
        printf("the frequency of %d is %d\n",*(arr+i),count);
    }
   
}
int main(){
    int arr[9]={1,2,3,4,5,8,8,8,9};
    frequency(arr);
    return 0;
}