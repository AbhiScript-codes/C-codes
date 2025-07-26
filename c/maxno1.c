#include <stdio.h>
int main()
{
    int r, c;

    printf("enter no rows");
    scanf("%d", &r);
    printf("enter no columns");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxcount = 0;
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
           if(arr[i][j]==1) count++;
        }
        if (maxcount<count)
            maxcount=count;
    }
    printf("the answer is =%d", maxcount);
    return 0;
}