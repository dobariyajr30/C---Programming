#include<stdio.h>
main()
{
    int i,j,l,k;

    printf("\n Enter value=>");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
    {
        for(j=l; j>=i; j--)
        {
            if(j%2==0)
            {
                printf("%d",k);
            }
            else
            {
                printf("*");
            }
        }
            k=1;

        printf("\n");
    }
}
