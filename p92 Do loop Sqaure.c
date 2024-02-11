#include<stdio.h>
main()
{
    int no1,i;

    printf("\n Enter limit=> ");
    scanf("%d",&no1);

    i=1;

    do
    {
        printf("\n %d - %d",i,i*i);
        i++;
    }
    while(i<=no1);
}
