#include<stdio.h>
main()
{
    int i,n;

    printf("\n Enter Limit=> ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i==5 || i==7)
        {
            break;
        }
        printf("\n %d",i);
    }

}
