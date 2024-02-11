#include<stdio.h>
main()
{
    char name[100];
    char ch;
    int i,x,c=0;

    printf("\n Enter Name=>");
    gets(name);

    x=strlen(name);

    for(i=0; i<x; i++)
    {
        ch=name[i];

        if(ch==' ')
        {
            c++;
        }
    }

    printf("\nTotal spaces are %d",c);
}
