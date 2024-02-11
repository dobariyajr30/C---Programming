#include<stdio.h>
main()
{
    FILE *f1;
    char ch;
    int c=0;

    f1=fopen("c:\\intel\\abc.txt","r");

    while(ch!=EOF)
    {
        ch=getc(f1);

        if(ch=='a' || ch=='A' ||ch=='e' || ch=='E' ||ch=='I' || ch=='i' ||ch=='O'|| ch=='o' ||ch=='U'|| ch=='u')
        {
            c++;
        }
    }
    fclose(f1);
    printf("\n Count of vowels is=> %d",c);
}
