 #include<stdio.h>
main()
{
    char name[100];
    int i,x,c=0;
    char ch;

    printf("\n Enter Sentence=> ");
    gets(name);

    x=strlen(name);

    for(i=0; i<x; i++)
    {
       ch=name[i];
       if (isupper(ch))
    {
        printf("%c",tolower(ch));
    }
    else if(islower(ch))
    {
        ch=name[i];
        printf("%c",toupper(ch));
    }
    else{
        printf("%c",ch);
    }
    }
    printf("\n");
}
