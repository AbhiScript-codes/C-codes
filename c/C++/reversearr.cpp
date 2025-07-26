#include<iostream>
using namespace std;
int main(){
    int arr[5]{1,2,3,4,5};
    int brr[5];
    for(int i = 0 ; i<=4 ; i++){
        brr[4-i]=arr[i];
    }
    for(int i = 0 ; i<=4 ; i++){
        cout<<brr[i];
    }
}