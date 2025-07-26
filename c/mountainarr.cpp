#include<iostream>
using namespace std;
int mount(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
        e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    return s;
}
int main(){
    int arr[5]={0,1,5,2,1};
    int peak=mount(arr,5);
    cout<<"the peak element is "<<peak;
    return 0;
}