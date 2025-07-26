//DSA Program for binary search algorithm

#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int arr[], int mid, int m, int n){
    int cowcount=1;
    int lastpos= arr[0];
    for(int i=0;i<n;i++){
        
        
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==m){
                return true;
            }
            lastpos=arr[i];
        }
        
    }
    return true;
}
int mindis(int arr[],int n,int m){
    
    if (m > n) return -1;
    std::sort(arr,arr+n);
    int s=0;
    int e=((*max_element(arr, arr + n))-(*min_element(arr, arr + n)));
    
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,mid,m,n)){
        
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int arr[5] = {4,2,1,3,6 };
    int m = 2;
    int ans = mindis(arr, 5, m);
    cout<< "answer is "<<ans<<endl;
    return 0;
}
