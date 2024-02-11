#include<stdio.h>
main()
{
    int rev,no1,y,z;

    printf("\n Enter Number For Reverse=> ");
    scanf("%d",&no1);
    z=no1;
    rev=0;

    while(no1>0){
    y=no1%10;
    rev=rev+y*y*y;
    no1=no1/10;
    }

    if(rev==z)
    {
        printf("\n It Is Amstrom Number");
    }
    else
    {
        printf("\n It's Not Amstrom Numeber");
    }


    printf("\n");

}

