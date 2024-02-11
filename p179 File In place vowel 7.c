#include<stdio.h>
main()
{
    FILE *f1;
    char ch;

    f1=fopen("c:\\intel\\abc.txt","r");

    while(ch!=EOF)
    {
        ch=getc(f1);

        if(ch=='a' || ch=='A' ||ch=='e' || ch=='E' ||ch=='I' || ch=='i' ||ch=='O'|| ch=='o' ||ch=='U'|| ch=='u')
        {
            printf("7");
        }
        else
        {
            printf("%c",ch);
        }
    }
    fclose(f1);

}
