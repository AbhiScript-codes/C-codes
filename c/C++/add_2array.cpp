#include<iostream>
using namespace std;
int digit(int arr[],int s){
    int digit=0;
    for(int i=0;i<s;i++){
        digit =digit*10+arr[i];
    }
    return digit;
}
int main(){
     int arr[3]={1,2,3};
     int brr[2]={9,9};
    cout<<"The sum is "<<digit(arr,3)+digit(brr,2);
    return 0;
}