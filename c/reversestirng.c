#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("enter the string");
    gets(str);
    int i =0;
    int size =0;
    while(str[i]!='\0'){
        size ++;
        i ++;
    }
    printf("size is :%d ",size);
    printf("the reverse :");
    for(int j=size-1; j>=0; j--){
        printf( "%c ",str[j]);
    }

return 0;

}