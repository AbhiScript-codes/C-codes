#include<stdio.h>
void rev(int *p,int size){
    int *i =p;
    int *j= p+size-1;
    while(i<j){
        int t=*i;
        *i=*j;
        *j=t;
        i++;
        j--;
    }
}    
    int main(){
        int p[5]={1,2,3,4,5};
        rev(p,5);
        for(int i=0;i<5;i++){
            printf("%d ",p[i]);
        }
        return 0;
    }

