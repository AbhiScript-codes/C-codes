#include<iostream>
using namespace std;
int RnSsearch(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
        e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    
        if(k >= arr[s] && k <= arr[n - 1]){
            int s1=s;
            int e1=n-1;
            mid=s1+(e1-s1)/2;
            while(s1<=e1){
                if(arr[mid]==k) return mid;
                else if(arr[mid]<k) s1=mid+1;
                else e1= mid-1; 
                mid=s1+(e1-s1)/2;
            }
        }
        else{
            int s1=0;
            int e1=s;
            mid=s1+(e1-s1)/2;
            while(s1<=e1){
                if(arr[mid]==k) return mid;
                else if(arr[mid]<k) s1=mid+1;
                else e1= mid-1; 
                mid=s1+(e1-s1)/2;
            }
        }    


    return -1;
}
int main(){
    int arr[5]={7,9,1,2,3};
    cout<<"The target element is at index "<<RnSsearch(arr,5,7);
    return 0;
}