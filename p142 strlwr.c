#include<stdio.h>
main()

{
    char n1[100];

    printf("\n Enter 1st Name=> ");
    gets(n1);

    strlwr(n1);

    printf("\n lwr is=> %s",n1);
}

