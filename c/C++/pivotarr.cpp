#include<iostream>
using namespace std;
int pivot1(int arr[],int n){
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
    return s;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int pivot=pivot1(arr,5);
    cout<<"the pivot element index is "<<pivot<<"\n";
    cout<<"The pivot element is "<<arr[pivot];
    return 0;
}