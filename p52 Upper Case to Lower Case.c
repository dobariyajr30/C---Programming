#include<stdio.h>
main()
{
    printf("\n ~Lowercase to Uppercase~");

    char ch;

    printf("\n Enter Any Latter Here=> ");
    scanf("%c",&ch);

    if (isupper(ch))
    {
        printf("You'r Lower case is=> %c",tolower(ch));
    }
    else if(islower(ch))
    {
        printf("You'r Upper case is=> %c",toupper(ch));
    }
    else
    {
        printf("\n Other");
    }
    printf("\n");
}
