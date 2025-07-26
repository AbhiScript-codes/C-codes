#include<iostream>
using namespace std;
bool ispossible(int arr[], int page, int m, int n){
    int painter=1;
    int paintg=0;
    for(int i=0;i<n;i++){
        if(paintg+arr[i]<=page){
            paintg +=arr[i];
        }
        else{
            painter++;
            if(painter>m ||  arr[i] > page){
                return false;
            }
            paintg =arr[i];
        }
    }
    return true;
}
int mintime(int arr[],int n,int m){
    
    if (m > n) return -1;
    int s=0;
    int e=0;
    for(int i=0;i<n;i++){
        e=e+arr[i];
    }
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,mid,m,n)){
        
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int arr[4] = {5, 5, 5, 5 };
    int m = 2;
    int ans = mintime(arr, 4, m);
    cout<< "answer is "<<ans<<endl;
    return 0;
}
