 #include <stdio.h>
int main()
{
    int r1, c1;
    printf("enter no first row");
    scanf("%d", &r1);
   printf("enter no first columns");
    scanf("%d", &c1);
    int a[r1][c1];
   for (int i = 0; i < r1; i++)
    {
       for (int j = 0; j < c1; j++)
        {
           scanf("%d", &a[i][j]);
       }
   }
    int r2, c2;
    printf("enter no second rows");
    scanf("%d", &r2);
    printf("enter no second columns");
    scanf("%d", &c2);
    int b[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
        int res [r1][c2]  ;
        if(c1==r2) {
    int cr =r2;
    for (int i =0 ;i<r1;i++){
        for (int j=0; j<c2 ;j++){
            res[i][j]=0;
            for (int k =0 ;k<cr;k++){
                res[i][j]=res[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for (int i =0 ;i<r1;i++){
        for (int j=0; j<c2 ;j++){
            printf("%d ",res[i][j]);
        }    
        printf("\n");
    }
    return 0;
}        
   else printf ("not possible");
}