#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n";
    cin>>n;
    int p=1;
    int ld;
    int sum=0;
    while(n!=0){
        ld=n%10;
        p=p*ld;
        sum=sum+ld;
        n=n/10;
    }
    cout<<"the difference between sum and product is = "<<(sum-p);
    return 0;
}