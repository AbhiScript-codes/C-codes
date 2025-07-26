#include<iostream>
using namespace std;
long long int sqrt(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    
    while(s<=e){
    long long int square=mid*mid;
    if(square==n){
        ans=mid;
        return ans;
    }
    else if(square<n){
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
double morepricious(int n,int p,int temp){
    double factor =1;
    double ans=temp;
    for(int j=0;j<p;j++){
        factor=factor/10;
        for(double i=ans;i*i<n;i=i+factor){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int x=37;
    int temp=sqrt(x);
    cout<<"The square is "<<morepricious(x,5,temp);
    return 0;
}
        