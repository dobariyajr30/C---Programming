#include<stdio.h>
main()
{
    int i,n1;

    printf("\n Enter Limit=> ");
    scanf("%d",&n1);

    i=1;

    do
    {
        printf("\n %d",i);
        i++;
    }
     while(i<=n1);
}
