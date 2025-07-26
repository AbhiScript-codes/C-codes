#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n=6;
    int m=4;
    int a[n]={1,2,2,2,3,4};
    int b[m] ={2,2,3,3};
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<b[i]<<" ";
                b[j]=INT_MIN;
                count++;
            }
        }

    }
    if(count==0) cout<<-1;
    return 0;

}