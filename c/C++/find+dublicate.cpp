//You are given an array 'ARR' of size 'N' containing each number between 1 and N 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,3};
//    int sum=(4*(4+1))/2;
//    int sum1=0;
//    for(int i=0;i<n;i++){
//        sum1=sum1+arr[i];
//    }
//   cout<<"the dublicate element :"<<(sum1-sum);
//}
int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
for(int i=1;i<n;i++){
    ans=ans^i;
}
cout<<ans;
return 0;
}
