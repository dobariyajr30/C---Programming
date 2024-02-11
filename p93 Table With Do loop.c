#include<stdio.h>
main()
{
    int no1,i;

    printf("\n Enter Table number=> ");
    scanf("%d",&no1);

    i=1;

    do{
        printf("\n%d x %d = %d",no1,i,no1*i);
        i++;
      }
    while(i<=10);

}
