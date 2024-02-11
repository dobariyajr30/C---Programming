#include<stdio.h>
main()
{
    FILE *f1;
    char ch;

    f1=fopen("c:\\intel\\abc.txt","r");

    while(ch!=EOF)
    {
        ch=fgetc(f1);

        if(ch==' ')
        {
        }
        else
        {
            printf("%c",ch);
        }
    }
    fclose(f1);
}
