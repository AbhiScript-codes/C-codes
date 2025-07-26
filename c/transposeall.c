#include <stdio.h>
int main()
{
    int r, c;

    printf("enter no rows\n");
    scanf("%d", &r);
    printf("enter no columns\n");
    scanf("%d", &c);
    int arr[r][c];
    printf("enter the data in matrix, press enter after entering each data\n");
    c
    printf("\n");

    if(r==c)
  {  
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
 }  
   else{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
   } 
    return 0;
}