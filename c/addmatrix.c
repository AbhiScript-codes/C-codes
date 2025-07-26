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
      for (int j = 0; j < r; j++)
      {
         scanf("%d", &arr[i][j]);
      }
   }
   int sum = 0;
   for (int i = 0; i < r; i++)
   {
      for (int j = 0; j < r; j++)
      {
         sum = sum + arr[i][j];
      }
   }
   printf("%d", sum);
   return 0;
}