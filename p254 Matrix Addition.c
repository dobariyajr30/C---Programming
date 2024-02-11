#include<stdio.h>
#define N 3
main()
{
    int i,j;
    int a[N][N];
    int b[N][N];

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


    printf("\n ~Addition of Matrix~");
    printf("\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {

            printf("%d ",a[i][j]+b[i][j]);

        }
        printf("\n");

    }

}
