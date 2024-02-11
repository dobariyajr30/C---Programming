#include<stdio.h>
#define N 3
main()
{
    int a[N][N];
    int b[N][N];
    int product[N][N];
    int i,j,k,r,c,s=0;

    printf("\n Enter The Number Row=> ");
    scanf("%d",&r);
    printf("\n Enter The Number Column=> ");
    scanf("%d",&c);

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("\n Enter Value for A mat=>");
            scanf("%d",&a[i][j]);
        }
         for(j=0; j<N; j++)
        {
            printf("\n Enter Value for B mat=>");
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n ~Multiplication~ \n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            for(k=0; k<r; k++)
            {
                s +=a[i][k]*b[k][j];
            }
            product[i][j] = s;
            s=0;
        }
    }

    printf("\n ~Ans is~ \n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n ");
    }

}
