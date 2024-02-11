#include<stdio.h>
main()
{
    char name[100];
    int i,x,l=0,u=0;
    char ch;

    printf("\n Enter The sentence=> ");
    gets(name);

    x=strlen(name);

    for(i=0; i<x; i++)
    {
        ch=name[i];
        if (isupper(ch))
        {
            u++;
        }
        else if(islower(ch))
        {
            l++;
        }
    }
     printf("\n Upper is=> %d",u);
     printf("\n Lower is=> %d",l);
}
