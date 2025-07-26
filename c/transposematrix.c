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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}