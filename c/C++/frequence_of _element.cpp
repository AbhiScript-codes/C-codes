#include<iostream>
using namespace std;
int main(){
    int count=0;
    int arr[7]={10, 20, 20, 30, 10, 20};
    bool vist[7]={false};
    for(int i =0;i<7;i++){
        if(vist[i]) continue;
        for(int j =i+1;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
                vist[j]=true;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
    return 0;
}