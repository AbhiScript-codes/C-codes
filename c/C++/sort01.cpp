#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,0,1,1,0};
    int i=0;
    int j=5;
    while (i<j){
        if(arr[i]==0 && arr[j]==1){
            i++;
            j--;
        }
       else if(arr[i]==1 && arr[j]==0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else {  // If both are same, move pointers inward
            if (arr[i] == 1) j--;
            else i++;
    }
    
    }
    for(int i =0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;
}