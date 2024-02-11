#include<stdio.h>
main()
{
    FILE *f1,*f2;
    char ch;

    f1=fopen("c:\\intel\\abc.txt","r");
    f2=fopen("c:\\intel\\pqr.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if(ch=='a' || ch=='A' ||ch=='e' || ch=='E' ||ch=='I' || ch=='i' ||ch=='O'|| ch=='o' ||ch=='U'|| ch=='u')
        {
          printf("7");
        }
        else
        {
            putc(ch,f2);
        }
    }
     fclose(f1);
     fclose(f2);
    printf("\n replace vowels with 7");
}
