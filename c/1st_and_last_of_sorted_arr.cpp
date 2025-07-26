#include<iostream>
using namespace std;
int front(int arr[],int n,int k){
    int s=0;
    int e =n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }  
        mid=s+(e-s)/2; 
    }
    return ans;
}
int end(int arr[],int n,int k){
    int s=0;
    int e =n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }  
        mid=s+(e-s)/2; 
    }
    return ans;
}
int main(){
    int arr[5]={3,3,3,3,3};
    cout<<"first occurrence of 3 is at index "<<front(arr,5,3)<<"\n";
    cout<<"last occurrence of 3 is at index "<<end(arr,5,3);
    return 0;
}
