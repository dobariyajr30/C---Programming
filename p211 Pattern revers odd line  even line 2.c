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
            if(i%2==0)
            {
                printf("%d",i);
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
