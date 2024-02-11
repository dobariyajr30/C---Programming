#include<stdio.h>
main()
{
    int no1,i;

    printf("\n Enter limit=> ");
    scanf("%d",&no1);

    i=no1;

    do{
        printf(" %d",i);
        i--;
    }
    while(i>=1);
}
