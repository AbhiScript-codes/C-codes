#include<iostream>
using namespace std;
int binary(int arr[], int s, int key){
    int start=0;
    int end = s-1;
    int mid =start +(end-start)/2;
    while(start<=end){
        if(arr[mid]==key) return mid;
        if(arr[mid]<key) start = mid +1;
        else end=mid-1;
        mid =start +(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[6]={1,2,3,4,6,6};
    int idx=binary(arr,6,6);
    cout<<"the index of 5 is "<< idx;
    return 0;
}