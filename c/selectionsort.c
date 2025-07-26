#include<stdio.h>
#include<limits.h>

int main() {
    int arr[7] = {7,6,5,4,3,2,1};
    for(int i =0; i<6 ;i++){
        int min = INT_MAX;
        int mindix = -1;
        for(int j =i ; j<7 ;j++){
            if(min>arr[j]){
                min = arr[j];
                mindix = j;
            }
        } 
        int temp = arr[mindix];
        arr[mindix]=arr[i];
        arr[i]= temp;
    }

    // Print the sorted array
    for(int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
