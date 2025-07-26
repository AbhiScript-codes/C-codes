#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m ,int arr3[]){
    int i=0;
    int j=0;
    int a=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[a]=arr1[i];
            a++;
            i++;
        }
        else{
            arr3[a]=arr2[j];
            a++;
            j++;
        }
    }
    while(i<n){
        arr3[a]=arr1[i];
        a++;
        i++;
    }
    while(j<m){
        arr3[a]=arr2[j];
        a++;
        j++;
    }
}
int main(){
    int arr1[6]={0,0,0,1,2,3};
    int arr2[3]={2,5,6};
    int arr3[9];
    merge(arr1,6,arr2,3,arr3);
    for(int i=0;i<9;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}