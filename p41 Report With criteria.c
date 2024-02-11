#include<stdio.h>
main()
{
    printf("\n ~Report~");

    int m,p,c,t;

    printf("\n You'r Maths Marks=> ");
    scanf("%d",&m);

    printf("\n You'r Phyics Marks=> ");
    scanf("%d,",&p);

    printf("\n You'r Chemsitry Marks=> ");
    scanf("%d",&c);

    t=m+p+c;
    printf("\n You'r Total Is=> %d",t);

    printf("\n");

    if(t>100){
        printf("\n You can have you'r PS");
    }

    else if(50>t<100)
    {
        printf("\n Write 5 time And go for play");
    }

    else{
        printf("\n Workd Hard");
    }

    printf("\n");

}
