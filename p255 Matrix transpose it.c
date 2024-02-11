#include<stdio.h>
#define N 3
main()
{
    int i,j;
    int a[N][N];

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("\n Enter Value=>");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");

    }

    printf("~Transpose of matrix~");
    printf("\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",a[j][i]);

        }
        printf("\n");

    }



}
