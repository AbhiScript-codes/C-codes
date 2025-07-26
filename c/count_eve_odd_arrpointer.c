#include<stdio.h>
void count(int *p){
    int counte=0;
    int counto=0;
   for(int i=0;i<5;i++){
    int current =*(p+i);
    if(current%2==0){
        counte++;
        
    } 
    else{
        counto++;
        
    }
    }
    printf("the number of even number is %d\n",counte);
    printf("the number of odd number is %d",counto);
   
}    
    int main(){
        int p[5]={1,2,3,4,5};
        count(p);
       
        return 0;
    }

