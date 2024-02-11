#include<stdio.h>
main()
{
    char name[100];
    char ch;
    int i,x;

    printf("\n Enter Name=>");
    gets(name);

    x=strlen(name);

    for(i=0; i<x; i++)
    {
        ch=name[i];
        printf("\n %c",ch);
    }
}
