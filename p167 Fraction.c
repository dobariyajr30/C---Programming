#include<stdio.h>
main()
{
    int i,l,m=1;

    printf("\n Enter Limit=> ");
    scanf("%d",&l);

    for(i=l; i>=1; i--)
    {
        printf(" *%d",i);
        m=m*i;
    }

    printf("\n Multiplication=> %d",m);
}
