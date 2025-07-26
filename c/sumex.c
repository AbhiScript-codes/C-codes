#include<stdio.h>
int main(){
    int r,c,l1,r1,l2,r2;
    printf("enter no l1");
    scanf("%d",& l1);
    printf("enter no r1");
    scanf("%d",& r1);
    printf("enter no l2");
    scanf("%d",& l2);
    printf("enter no r2");
    scanf("%d",& r2 );
    printf("enter no rows");
    scanf("%d",& r);
    printf("enter no columns");
    scanf("%d",& c);
    int arr[r][c];
    for(int i =0;i<r;i++){
       for(int j =0;j<c;j++){
        scanf("%d",& arr[i][j]);
       }
    }
    int sum =0;
    for(int i =l1;i<l2;i++){
       for(int j =r1;j<r2;j++){
        sum=sum+arr[i][j];
       }
    }
    printf("%d",sum);
    return 0;
} 