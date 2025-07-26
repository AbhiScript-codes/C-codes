#include<iostream>
using namespace std;
int sum(int x){
    if(x==1) return 1;
    return x+sum(x-1);
    }

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<sum(n);
}