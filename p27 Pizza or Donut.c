#include<stdio.h>

main()
{
    printf("\n How much money you have ? ");

    int m;

    printf("\n I have ");
    scanf("%d",&m);


    if(m>200)
    {
        printf("\n Let's Have Pizza");
    }
    else
    {
        printf("\n Ok! Let's have Donut");
    }

    printf("\n");
}
