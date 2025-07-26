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
        int p[5]={1,2,3,2,1};
        int s[5];
        for (int i = 0; i < 5; i++) {
            s[i] = p[i];
        }
        int count=0;
        rev(p,5);
        for(int i=0;i<5;i++){
            if(s[i]==p[i]){
                count++;
            }
        }
        if(count==5)
        printf("the array is a palindrome");
        else
        printf("the array is not a palindrome");
        return 0;
    }

