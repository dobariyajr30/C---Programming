#include<stdio.h>
main()
{
    char name[100];
    int i,x,c=0;
    char ch;

    printf("\n Enter The Sentence=> ");
    gets(name);

    x=strlen(name);


    for(i=0; i<x; i++)
    {
        ch=name[i];
        if(ch=='  ')
        {
        }
        else
        {
            printf("%c",ch);
        }
    }
}

