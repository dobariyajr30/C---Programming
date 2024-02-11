#include<stdio.h>
main()

{
    char n1[100];

    printf("\n Enter 1st Name=> ");
    gets(n1);

    strrev(n1);

    printf("\n Reverse is=> %s",n1);
}
