#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter n :";
    cin>>n;
    int a[n];
    cout<<"enter arrys element ";
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i<n ; i++){
        a[i]=i*i;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}