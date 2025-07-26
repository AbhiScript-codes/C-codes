#include <stdio.h>
int main() {
    int arr[5];
    for(int i = 0 ; i<=4;i++){
    printf("enter %d element\n ",i+1);
    scanf("%d",& arr[i]);
    }
    for(int i = 0 ; i<=4;i++){
        if(i%2==0) arr[i]=arr[i]+10;
        else arr[i]=arr[i]*2;
    }
    for(int i = 0 ; i<=4;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}