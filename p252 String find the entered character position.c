#include <stdio.h>
main()
{
    char name[100];
    int i, x, position=0;
    char search;

    printf("\nEnter The Sentence => ");
    gets(name);

    printf("\nEnter the character to search for => ");
    scanf("%c",&search);

    x=strlen(name);

    for(i=0; i<x; i++)
    {
        if (search==name[i])
        {
            position=i+1;
            break;
        }
    }

    printf("\nPosition of '%c' => %d", search, position);

}
