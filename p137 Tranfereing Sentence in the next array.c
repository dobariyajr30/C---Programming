#include<stdio.h>
main()
{
    char name1[100];
    char name2[100]={""};
    int x,i;

    printf("\n Enter the Sentence=> ");
    gets(name1);

    x=strlen(name1);

    for(i=0; i<x; i++)
    {
        name2[i]=name1[i];
    }
    printf("\n Print the Sentence=> %s",name2);
}
