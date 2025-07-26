#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i = 3 ;i<=n ; i++){
        cout<<"1,1"<<(i+(i+1))<<',';
    }
    
}