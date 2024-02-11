#include<stdio.h>
main()
{
    printf("\n ~Grade~");

    float m,p,c,t;

    printf("\n How much you score in Maths=> ");
    scanf("%f",&m);

    printf("\n How much you score in Phyics=> ");
    scanf("%f",&p);

    printf("\n How much you score in Chmestry=> ");
    scanf("%f",&c);

    t=m+p+c;

    printf("\n You'r Total is=> %.2f",t);

    if(t>0 & t<50)
    {
        printf("\n C Grade");
    }
    else if(t>50 & t<100)
    {
        printf("\n B Grade");
    }
    else if(t>100)
    {
        printf("\n A Grade");
    }


}
