#include<stdio.h>
main()
{
    int no1,z,rev,y;

    printf("\n Enter Number For Reverse=> ");
    scanf("%d",&no1);
    z=no1;
    rev=0;

    while(no1>0)
    {
    y=no1%10;
    rev=rev*10+y;
    no1=no1/10;
    }

    printf("\n Rev= %d",rev);
    printf("\n No= %d",z);

}

