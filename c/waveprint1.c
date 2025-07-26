#include<stdio.h>
int main()
{
    char str[40];
    printf("enter the string\n");
    scanf("%[^\n]s",str);
    int size=0;int k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    printf("The size of string is: %d",size);
    return 0;
}