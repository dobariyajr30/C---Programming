#include<stdio.h>
main()
{
    FILE *f1,*f2,*f3;
    char ch;

    f1=fopen("c:\\intel\\abc.txt","r");
    f2=fopen("c:\\intel\\vowels.txt","w");
    f3=fopen("c:\\intel\\concel.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);

        if(ch=='a' || ch=='A' ||ch=='e' || ch=='E' ||ch=='I' || ch=='i' ||ch=='O'|| ch=='o' ||ch=='U'|| ch=='u')
        {
            putc(ch,f2);
        }
        else
        {
            putc(ch,f3);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("\n Transfer Successfully ");
}
