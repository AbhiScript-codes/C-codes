#include<stdio.h>
int main() {
    int nst=1;
    for(int i =1;i<=5;i++){
        int a =1;
        for (int j =1 ;j<5-i;j++){
            printf(" ");

        }
        for(int k =1;k<=nst;k++){
         int d=a+64;
         char ch =(char)d;
         printf("%c ",d);
         a++;
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}