#include<stdio.h>

main()
{

    int a;

    printf("\n Enter You'r Age=>  ");
    scanf("%d",&a);

    if(a>18)
    {
        printf("\nYou can vote");
    }
    else{
        printf("\nYou cant' vote");
    }

    printf("\n");
}
